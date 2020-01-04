# include<stdio.h>
# include<iostream>
using namespace std;
# include <string.h>
# include <stdlib.h>
void excsolve(int *p,int (*m)[7],int (*s)[7],int n)
{
	int i,j,k,t;
	for(i=1;i<n;i++)
	{
		m[i][i]=0;
	}
	int r;
	for(r=2;r<=n;r++)//从第M12开始即A1*A2
	{
		for(i=1;i<=n-r+1;i++)//得到一半的值即可，最开始五个，四个，三个。。。一个 
		{
			j=i+r-1;
			m[i][j]=m[i+1][j]+p[i-1]*p[i]*p[j];
			s[i][j]=i;
			for(k=i+1;k<j;k++)
			{
				t=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
				if(t<m[i][j])
				{
					m[i][j]=t;
					s[i][j]=k;
				}
			}
		}
	 } 
}
void prif(int i,int j,int(*s)[7])
{
    if(i==j)
	{
		return;
	}
	cout<<"("; 
	prif(i,s[i][j],s);
	prif(s[i][j]+1,j,s);
	//cout<<"multiplyb A"<<i<<","<<s[i][j];
	//cout<<"and A"<<(s[i][j]+1)<<","<<j<<endl;
	cout<<"A"<<i;
	cout<<"A"<<(s[i][j]+1);	
	cout<<")";
} 
int main()
{
	int p[7]={30,35,15,5,10,20,25};
	int s[7][7]={0};
	int m[7][7]={0};
	excsolve(p,m,s,6);
	prif(1,6,s);	
 } 

