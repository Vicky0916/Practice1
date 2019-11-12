#include<stdio.h>
#include<stdlib.h>
int max=0; 
void compute()
{
	int temp = 0;
	int o[100],P[100][100],Q[100][100],x[100];
	for(int i=1;i<=100;i++)
	{
	temp+= P[i][x[i]]*Q[x[i]][i];
	}
	if(temp>max)
	{
		max = temp;
		for(int i=1;i<=100;i++)
		{
			o[i] = x[i];
		}
	}
}

void traceback(int t)
{
	int x[100];
	int i,j,temp;
	if(t>100)
	{
		compute();
	}

	for(i=t;i<=100;i++)
	{
		temp = x[i];
		x[i] = x[t];
		x[t] = temp;
		traceback(t+1);
		temp = x[i];
		x[i] = x[t];
    	x[t] = temp;		
	}
}

int main()
{
	int x[100],P[100][100],Q[100][100],o[100];
	int n;
	FILE *p1=fopen("input.txt","a");
	FILE *p2=fopen("output.txt","a");
	printf("请输入双方队员数量：\n");
	scanf("%d",&n);
	fprintf(p1,"%d",n);
	for(int i=1;i<=n;i++)
	{
	x[i] = i;
	} 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d",&P[i][j]);
			fprintf(p1,"%d",P[i][j]);
		}
	} 
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d",&Q[i][j]);
			fprintf(p1,"%d",Q[i][j]);
		}
	} 
	traceback(1); 
	printf("男女双方竞赛优势总和最大是：%d\n",max);
	fprintf(p2,"%d",max);
	for(int i=1;i<=n;i++)
	{
		printf("%d------%d\n",i,o[i]);
		fprintf(p2,"%d------%d",i,o[i]);
	}
	return 0;
} 



