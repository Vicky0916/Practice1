//#include <iostream>
//#include <stdlib.h>
//#include <stdio.h>
//using namespace std;
//
//int Fib(int n)
//{
//	int a1 = 1;
//	int a2 = 2;
//	int a3 = 0;
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 2;
//	for (int i = 0; i < n - 2; i++)
//	{
//		a3 = a1 + a2;
//		a1 = a2;
//		a2 = a3;
//	}
//	return a3;
//}
//int main()
//{
//	int n;
//	while (1)
//	{
//		int ret;
//		cin >> n;
//		int sum = 0;
//		int ret1 = n;
//		ret=Fib(n);
//		//if (ret > 100000)
//		//{
//		//	for (int i = 0; i < 6; i++)
//		//	{
//		//		//1234567
//		//		ret = ret1 % 10;
//		//		sum +=ret* pow(10, i);
//		//		ret1 = ret1 / 10;
//		//	}
//		//	ret = sum;
//		//}
//		printf("%06ld\n", ret);//输出后六位
//		//cout << ret << endl;
//	}
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int Fib(int n)
{
	int a1 = 1;
	int a2 = 2;
	int a3 = 0;
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	for (int i = 0; i < n - 2; i++)
	{
		a3 = a1 + a2;
		a1 = a2;
		a2 = a3;
	}
	return a3;
}
int main()
{
	int n;
	while (1)
	{
		int ret;
		cin >> n;
		int sum = 0;
		int ret1 = n;
		ret = Fib(n);
		//if (ret > 100000)
		//{
		//	for (int i = 0; i < 6; i++)
		//	{
		//		//1234567
		//		ret = ret1 % 10;
		//		sum +=ret* pow(10, i);
		//		ret1 = ret1 / 10;
		//	}
		//	ret = sum;
		//}
		printf("%06ld\n", ret);//输出后六位
		//cout << ret << endl;
	}
	system("pause");
	return 0;
}