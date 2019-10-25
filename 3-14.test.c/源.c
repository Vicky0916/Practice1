////#include <stdio.h>
////#include <stdlib.h>
////int main()
////{
////	    int i,j,k;
////		for (i = 0; i < 7; i++)
////		{
////			for (k = -i + 6; k > 0; k--)
////			{
////				    printf(" ");
////			}
////			for (j = 1; j <= 2 * i + 1; j++)	
////			{
////					printf("*");	
////			}
////			printf("\n");
////		}
////		for (i = 6; i >=0; i--)
////		{
////			for (k = 0;k <= 6-i ; k++)
////			{
////				printf(" ");
////			}
////			for (j = 1;j <=2*i-1; j++)
////			{
////				printf("*");
////			}
////			printf("\n");
////		}
////	system("pause");
////	return 0;
////}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//int F(int n)
//{
//    //int a, int b, int c;
//	int a = n / 100;
//	int b = n % 100 / 10;
//	int c = n % 100 % 10;
//	if ((pow(a, 3) + pow(b, 3) + pow(c, 3)) == n)
//	printf("%d ", n);
//}
//int main()
//{
//	int i;
//	for (i = 0; i <= 999; i++)
//	{
//		F(i);
//	}
//	system("pause");
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, i ,sum = 0;
	scanf_s("%d", &a);
	int s = a;
	for (i = 0; i < 4; i++)
	{
		s = 10 * s + a;
		sum += s;
	}
	printf("%d", sum + a);

	system("pause");
	return 0;
}