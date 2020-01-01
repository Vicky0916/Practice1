#include <iostream>
using namespace std ;
typedef struct binode
{
    int wx , w , wd , *cost , d ; 
    struct binode *parent , *left , *right ;
}binode , *link ;
int n , k ;
link *subt ;
link Newnode ()
{
    link p = new binode ;
    p->d = p->w = p->wd = p->wx = 0 ;
    p->parent = p->left = p->right = NULL ;
    return p ;
}
void Addw (link t)
{
    t->wd = t->d * t->wx ;
    if (t->left)
    {
        t->w += t->left->w + t->right->w ;
        t->wd += t->left->wd + t->right->wd ;
    }
}
void Addd (link t)
{
    if (t->parent)
        t->d += t->parent->d ;
    t->cost = new int[k + 1] ;
}
void PostOrder (void(*Visit)(link u) , link t)
{
    if (t)
    {
        PostOrder (Visit , t->left) ;
        PostOrder (Visit , t->right) ;
        Visit (t) ;
    }
}
void PreOrder (void(*Visit)(link u) , link t)
{
    if (t)
    {
        Visit (t) ;
        PreOrder (Visit , t->left) ;
        PreOrder (Visit , t->right) ;
    }
}
link Findc (link q)
{
    while (q->right)
        q = q->right ;
    return q ;
}
void Init ()
{
    int i , a , b , c ;
    link p , q ;
    cin >> n >> k ;
    subt = new link [n + 1] ;
    for (i = 0 ; i <= n ; i ++)
        subt[i] = Newnode () ;
    for (i = 1 ; i <= n ; i ++)
    {
        cin >> a >> b >> c ;
        subt[i]->wx = subt[i]->w = a ;
        subt[i]->d = c ;
        p = Findc (subt[b]) ;
        q = Newnode () ;
        p->left = subt[i] ;
        p->right = q ;
        subt[i]->parent = q->parent = p ;
    }
    PreOrder (Addd , subt[0]) ;
    PostOrder (Addw , subt[0]) ;
}
void Comp (link t)
{
    int i , j , tmp ;
    if (!t->left)
    {
        t->cost[0] = t->d * t->wx ;
        for (i = 1 ; i <= k ; i ++)
            t->cost[i] = 0 ;
    }
    else
    {
        for (i = 0 ; i <= k ; i ++)
        {
                t->cost[i] = t->wd - t->w * t->d ;
            
            for (j = 0 ; j <= i ; j ++)
            {
                tmp = t->left->cost[j] + t->right->cost[i - j] + t->wx * t->d ;
                if (tmp < t->cost[i])
                    t->cost[i] = tmp ;
            }
        }
    }
}
int Solution ()
{
    PostOrder (Comp , subt[0]) ;
    return subt[0]->cost[k] ;
}
int main ()
{
    Init () ;
    cout << Solution () ;
    return 0 ;
}
