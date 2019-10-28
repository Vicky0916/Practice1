#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, sum1 = 0,sum2 = 0;
	for (i = 1; i <= 50; i++)
	{
		sum1 += 1 / (2 * i - 1);
		sum2 += -1 / (2 * i );
	}
	printf("%d\n ", sum1 + sum2);
	system("pause");
	return 0;
}

#include<stdio.h>
#include <stdlib.h>
int main()
{
	double a, sum = 0.0, n = 1.0;
	for (int i = 1; i < 101; i++)
	{
		a = n / i;
		n = -n;
		sum += a;
	}
	printf("sum=%lf", sum);
	system("pause");
	return 0;
}
