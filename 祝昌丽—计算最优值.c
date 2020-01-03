#include <stdio.h>
#define N 20 
void MatrixChain(int p[N],int n,int m[N][N],int s[N][N]){ 
  int i,j,t,k;   
  int r;             //��¼��˵ľ���������� 
  for(i=1;i<=n;i++){ 
    m[i][i]=0;         //��һ���������ʱ����˴���Ϊ 0  
  }   
  //���������������ʼһ�ε���  
  for(r=2;r<=n;r++){ 
       
    for(i=1;i<=n-r+1;i++){ 
      
      j=i+r-1; 
      
      m[i][j]=m[i+1][j]+p[i-1]*p[i]*p[j]; 
      //�õ��������˶Ͽ���λ��  
      s[i][j]=i; 
      //Ѱ�Ҽ����Ų�ͬ���������˴�������Сֵ���޸� m ���飬�ͶϿ���λ�� s ����  
      for(k=i+1;k<j;k++){ 
        t=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j]; 
        if(t<m[i][j]){ 
          m[i][j]=t; 
          s[i][j]=k; 
        } 
      } 
    } 
  }  
} 
  
int main(void){ 
  int n,n1,m1,i,j=2; 
  int p[N]={0};          
  int m[N][N]={0};      
  int s[N][N]={0};        
  printf("������������:\n"); 
  scanf("%d",&n); 
  for(i=1;i<=n;i++){ 
    printf("�������%d��������к���(n1*m1 ��ʽ):",i); 
    scanf("%d*%d",&n1,&m1); 
    if(i==1){ 
      p[0]=n1; 
      p[1]=m1; 
    } 
    else{ 
      p[j++]=m1; 
    } 
  } 
  printf("\n��¼�����к���:\n"); 
  for(i=0;i<=n;i++){ 
    printf("%d ",p[i]); 
  } 
  printf("\n"); 
  MatrixChain(p,n,m,s); 
  printf("\n������˵���С��������Ϊ:\n"); 
  for(i=1;i<=n;i++){ 
    for(j=1;j<=n;j++){ 
      printf("%d  ",m[i][j]); 
    } 
    printf("\n"); 
  } 
  printf("\n������˶Ͽ���λ�þ���Ϊ:\n"); 
  for(i=1;i<=n;i++){ 
    for(j=1;j<=n;j++){ 
      printf("%d ",s[i][j]);
	   
    } 
    printf("\n"); 
  } 
  printf("������С��˴���Ϊ:%d\n",m[1][n]); 
  return 0; 
} 
