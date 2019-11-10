#include <stdio.h>
#include <stdlib.h>

void Common(int a,int b)
{
	int max = a * b;
	int min = 0;
	int i = a;
	while(i <= max)
	{
		if (i%a == 0 && i%b == 0)
		{
			min = i;
			break;
		}
		else
		{
			i++;
		}
	}
	printf("%d ", min);
}
int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	 Common(a, b);
	//printf("%d", ret);
	system("pause");
	return 0;
}