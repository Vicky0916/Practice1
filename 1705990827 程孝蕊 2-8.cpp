/*分析：设n个元素的集合可以划分为F(n,m)个不同的由m个非空子集组成的集合。
考虑3个元素的集合，可划分为
一、 1个子集的集合：{{1，2，3}}
二、2个子集的集合：{{1，2}，{3}}，{{1，3}，{2}}，{{2，3}，{1}}
三、 3个子集的集合：{{1}，{2}，{3}}
所以F(3,1)=1;F(3,2)=3;F(3,3)=1;
如果要求F(4,2)
1.往 一 里添一个元素{4}，得到{{1，2，3}，{4}}
2.往 二 里的任意一个子集添一个4，得到
{{1，2，4}，{3}}，{{1，2}，{3，4}}，
{{1，3，4}，{2}}，{{1，3}，{2，4}}，
{{2，3，4}，{1}}，{{2，3}，{1，4}}
所以  F(4,2)=F(3,1)+2*F(3,2)＝1+2*3＝7
因此可得出公式：F(n,m)=F(n-1,m-1)+m*F(n-1,m)
源代码：*/
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
int F(int n,int m)
{
	if(m==1||n==m)  //当元素的个数只有一个或者元素个数与非空子集数相等 
	  return 1;
	else
	  return F(n-1,m-1)+F(n-1,m)*m;
}
int main()
{
	FILE *fp;          //建立一个文件操作指针 
	FILE *fw;
	fp=fopen("input.txt","a");
	fw=fopen("output.txt","a");
	int n,m;
	int sum=0;
	printf("请输入元素的个数："); 
	scanf("%d",&n);
	fprintf(fp,"%d\n",n);
	printf("请输入要划分的子集数：");
	scanf("%d",&m);
	fprintf(fp,"%d\n",m);
	sum+=F(n,m);  
	printf("集合划分是：%d\n",sum);
	fprintf(fw,"%d\n",sum);
	system("pause");
	return 0;
}
