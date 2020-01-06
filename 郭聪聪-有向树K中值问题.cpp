#include <iostream>
using namespace std;
typedef struct Trnode
{
    int wx,w,wd,*cost,d;
    struct Trnode*parent,*left,*right;
}Trnode,*link;
int n,k;
link *subt;
link Node()
{
    link p=new Trnode;
    p->d=p->w=p->wd=p->wx=0;
    p->parent=p->left=p->right=NULL;
    return p;
}
void Addw (link t)
{
    t->wd=t->d*t->wx;
    if (t->left)
    {
        t->w+=t->left->w+t->right->w;
        t->wd+=t->left->wd+t->right->wd;
    }
}
void Addd (link t)
{
    if (t->parent)
        t->d+=t->parent->d;
    t->cost=new int[k+1];
}
void PostOrder(void(*Visit)(link u),link t)//����ָ��
{
    if(t)
    {
        PostOrder(Visit,t->left);
        PostOrder(Visit,t->right);
        Visit(t);
    }
}
void PreOrder (void(*Visit)(link u) , link t)
{
    if (t)
    {
        Visit (t) ;
        PreOrder(Visit,t->left);
        PreOrder(Visit,t->right);
    }
}
link Findc (link q)
{
    while(q->right)
        q=q->right;
    return q;
}
void Init ()
{
    int i,a,b,c;
    link p,q;
    int n,k;
    freopen("input.txt","r",stdin); 
	freopen("ouput.txt","w",stdout); 
	scanf("%d %d",&n,&k);//n���ڵ㣬k����תվ
    subt=new link[n + 1];//subt��ָ���ָ��
    for (i=0;i<=n;i++)
        subt[i]=Node();//subt[i]��ָ���i���ڵ��ָ��
    for (i=1;i<=n;i++)
    {
	    if(scanf("%d %d %d",&a,&b,&c)!=EOF);
        //cin>>a>>b>>c;
        subt[i]->wx=subt[i]->w=a;//a��ʾ�ö����Ȩ
        subt[i]->d=c;//c��ʾ��i��b���ľ���
        p=Findc(subt[b]);//�ҵ�b�ڵ�������ӽڵ�
        q=Node();
        p->left=subt[i];
        p->right=q;//Ϊp��ָ��Ľڵ����Ҷ�ӽڵ�ʹ���еĵ��������Ϊ��
        subt[i]->parent=q->parent=p;
    }
    PreOrder(Addd,subt[0]);
    PostOrder(Addw,subt[0]);
}
void Comp(link t)
{
    int i,j,tmp;
    if (!t->left)
    {
        t->cost[0]=t->d*t->wx;//���е���˼������t��Ϊ����������ɵ�i == 0 ,��ʱ�ܵĿ���ķ������������0����ô����t�㴦���������أ�
        for (i=1;i<=k;i++)
            t->cost[i]=0;
    }
    else
    {
        for(i=0;i<=k;i++)
        {
                t->cost[i]=t->wd-t->w*t->d;
            for (j=0;j<=i;j++)
            {
                tmp=t->left->cost[j]+t->right->cost[i-j]+t->wx*t->d;
                if (tmp<t->cost[i])
                    t->cost[i]=tmp;
            }
        }
    }
}
int main ()
{
    Init();
    PostOrder(Comp,subt[0]);
    printf("%d\n",(subt[0]->cost[k]));
	//cout<< subt[0]->cost[k];
    fclose(stdin);
	fclose(stdout);
    
    return 0 ;
}
