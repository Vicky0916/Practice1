#include <iostream>
#include <fstream>
using namespace std; 

int Max(int a,int b)
{
	int max=0;
	max=(a>b?a:b);
	return max;
}

int minmax(int a,int b,int*c)
{   
    int n=a,m=b;
	int i,j,k,maxx,min;
	int**d=new int*[n+1];
	for(i=0;i<n+1;i++)
	d[i]=new int[m+1];
	d[0][1]=0;
	for(int r=1;r<=n;r++)
	{
		d[r][1]=d[r-1][1]+c[r-1];
	}
	if(m==1)
	return d[n][1];
	for(j=2;j<=m;j++)
    for(i=j;i<=n;i++)
    {
    	min=10000;
    	for(k=1;k<=i-1;k++)
    	{
    		maxx=max(d[i][1]-d[k][1],d[k][j-1]);
    		if(maxx<min)
    		min=maxx;
    	}
    	d[i][j]=min;
    }
    return min;
}

int main()
{
	fstream fin("input.txt",ios::in);
	fstream fout("output.txt",ios::out);
	int a,b;
	fin>>a;
	fin>>b;
	int *c=new int[a];
	for(int i=0;i<a;i++)
	fin>>c[i];
	int min=minmax(a,b,c);
	fout<<min;
	fin.close();
	fout.close();
	return 0;
}	
	
