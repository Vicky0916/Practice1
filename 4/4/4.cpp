#include <iostream>
#include <stdlib.h>
using namespace std;
int F(int n1,int n2)
{
	int i = 0;
	int sum=0；
	while (n1)
	{
		n1 = n1 % n2;
		sum += n1 + n1*pow(10, i);
		i++;
	}
	return n1;
}
int main()
{
	int n;
	cout << "请输入一个十进制数字：" << endl;
	cin >> n;
	int number;
	cout << "请输入你要转换的几进制数：" << endl;
	int ret=F(n, number);
	cout << ret;
	cin>>number;
}