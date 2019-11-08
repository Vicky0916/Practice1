#include <stdio.h>
int main()
{   
    FILE *fp;          
	FILE *fw;
	fp=fopen("input.txt","a");
	fw=fopen("output.txt","a");
	int i=0,j,zs,count=0,max=0,quntity=0; 
	int arr[100], n;
	printf("请输入元素个数："); 
	scanf("%d", &n);
	fprintf(fp,"%d\n",n);
	printf("请输入元素：\n"); 
	for (i = 0; i < n; i++)
	scanf("%d", &arr[i]);
	fprintf(fp,"%d\n",arr[i]);
	for (i = 0; i < n; i++)
	{
		for (j = i+1; j < n; j++)
		{
		 if (arr[i] == arr[j])  //如果出现相等的数，先用计数器记下重数，并且保留该数值 
		        count++;
				zs = arr[i];	
			if (count > max)  //如果出现比重数大的，覆盖掉之前的重数，记录下这个众数 
			{
				quntity = zs;
				max = count;
			}
		}
	} 
	printf("众数是：%d\n重数是：%d\n", quntity, max);
	fprintf(fw,"%d\n%d\n",quntity, max);
	return 0;
}

