#include <stdio.h>
int main()
{   
    FILE *fp;          
	FILE *fw;
	fp=fopen("input.txt","a");
	fw=fopen("output.txt","a");
	int i=0,j,zs,count=0,max=0,quntity=0; 
	int arr[100], n;
	printf("������Ԫ�ظ�����"); 
	scanf("%d", &n);
	fprintf(fp,"%d\n",n);
	printf("������Ԫ�أ�\n"); 
	for (i = 0; i < n; i++)
	scanf("%d", &arr[i]);
	fprintf(fp,"%d\n",arr[i]);
	for (i = 0; i < n; i++)
	{
		for (j = i+1; j < n; j++)
		{
		 if (arr[i] == arr[j])  //���������ȵ��������ü������������������ұ�������ֵ 
		        count++;
				zs = arr[i];	
			if (count > max)  //������ֱ�������ģ����ǵ�֮ǰ����������¼��������� 
			{
				quntity = zs;
				max = count;
			}
		}
	} 
	printf("�����ǣ�%d\n�����ǣ�%d\n", quntity, max);
	fprintf(fw,"%d\n%d\n",quntity, max);
	return 0;
}

