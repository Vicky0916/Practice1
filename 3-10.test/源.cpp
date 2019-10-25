交换两个数的值
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 1, b = 2;
    printf("a = %d,b = %d", a, b);
	int* c;
	int* p1 = &a;
	int* p2 = &b;
	c = p1;
	p1 = p2;
	p2 = c;
	printf("a = %d,b = %d\n", *p1, *p2);
	system("pause");
	return 0;
}


#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 1, b = 2;
	printf("a = %d,b = %d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf(" a = %d,b = %d\n", a, b);
	system("pause");
	return 0;
}