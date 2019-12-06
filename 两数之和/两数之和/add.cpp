#include <iostream>
#include <stdlib.h>
using namespace std;
//int add(int a,int b)
//{
//	while (b)
//	{
//		int temp = a ^ b;//两数相加
//	    b = a & b << 1;  //计算进位
//		a = temp;
//	}
//	return a;
//}
void IsOK(int a, int b, int c)
{
	if ((a + b > c && a + c > b && b + c > a) && (abs(a - b) < c && abs(a - c) < b && abs(b - c) < a))
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
int main()
{
	/*int a, b;
	while(cin >> a >> b)
	{
		int ret=add(a, b);
		cout << ret << endl;
	}*/
	int a, b, c;
	while (cin >> a >> b >> c)
	{
		IsOK(a, b, c);
	}
	system("pause");
	return 0;
}
#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
//int add(int a,int b)
//{
//	while (b)
//	{
//		int temp = a ^ b;//两数相加
//	    b = a & b << 1;  //计算进位
//		a = temp;
//	}
//	return a;
//}

int main()
{
	/*int a, b;
	while(cin >> a >> b)
	{
		int ret=add(a, b);
		cout << ret << endl;
	}*/
	double a = 0;
	double b = 0;
	double c = 0;
	while (cin >> a >> b >> c)
	{
		if ((abs(a - b) < c) && (abs(a - c) < b) && (abs(b - c) < a))
						cout << "Yes" << endl;

		else
						cout << "NO" << endl;

	}


}