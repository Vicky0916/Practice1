#include <stdio.h> 
int max(int a,int b)
{
	return a>b?a:b; 
}
int min_add(int n,int m,int* a,int(*b)[100])
{
	for(int i=1;i<=n;i++)
	{
		b[i][1]=b[i-1][1]+a[i]; 
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=2;j<=m;j++)
		{
			int min=10000;
			for(int k=1;k<i;k++)
			{
				int temp=max(b[i][1]-b[k][1],b[k][j-1]);
				if(temp<min)
				{
					min=temp;
				}
			}
			b[i][j]=min;
		}
    }
	return b[n][m];
}
	
int main()
{
	int a[100];
	int b[100][100]={0};
	int n,m;
	freopen("input.txt","r",stdin); 
	freopen("ouput.txt","w",stdout); 
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
	{
	if(scanf("%d",&a[i])!=EOF);
    }
	printf("%d\n",min_add(n,m,a,b));
	fclose(stdin);
	fclose(stdout);
	return 0;
} 

