#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int b[10] = { 1,4,7,9,0,3,5,2,8,6 };
	int i, j;
	//int temp ;
	int* p1 = &a;
	int* p2 = &b;
	for(i=0;i<10;i++)
	{
		a[i] = b[i];
		p1++;
		p2++;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
      system("pause");
	return 0;
	
}