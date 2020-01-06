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
void PostOrder(void(*Visit)(link u),link t)//函数指针
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
	scanf("%d %d",&n,&k);//n个节点，k个中转站
    subt=new link[n + 1];//subt是指针的指针
    for (i=0;i<=n;i++)
        subt[i]=Node();//subt[i]是指向第i个节点的指针
    for (i=1;i<=n;i++)
    {
	    if(scanf("%d %d %d",&a,&b,&c)!=EOF);
        //cin>>a>>b>>c;
        subt[i]->wx=subt[i]->w=a;//a表示该顶点的权
        subt[i]->d=c;//c表示（i，b）的距离
        p=Findc(subt[b]);//找到b节点的最右子节点
        q=Node();
        p->left=subt[i];
        p->right=q;//为p所指向的节点添加叶子节点使所有的点的右子树为空
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
        t->cost[0]=t->d*t->wx;//这行的意思是设置t点为服务机构，可当i == 0 ,此时总的可设的服务机构都等于0，怎么能在t点处设服务机构呢！
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
