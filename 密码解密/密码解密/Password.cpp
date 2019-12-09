#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;
//void Break(string str)
//{
//	string ret;
//	for (int i = 0; i < str.size(); i++)
//	{	
//		if (str[i] > 'A'&&str[i] < 'Z')
//		{
//			ret = ((str[i] - 'A' - 5 + 26) % 26) + 'A';
//			cout << ret;
//		}
//	}
//	//cout << endl;
//}
int ISSushu(int n)
{
	int a = 0;
	for (int i = 2; i < n - 1; i++)
	{
		if (n%i == 0)
		{
			a++;
		}
	}
	if (a == 0)
	{
		return 1;   //是素数
	}
	else
	{
		return 0;   //不是素数
	}
}
int Components(int n)
{
	int flag = 0;
	vector <int> a;
	while (0==ISSushu(n))
	{
		for (int i = 0; i < n; i++)
		{
			if()
		}
	}
}
int main()
{
	int n;
	while (cin >> n)
	{
		int ret=ISSushu(n);
		cout << ret << endl;
		ret = 0;
	}
	//string str;
	//while (getline(cin,str))
	//{
	//	//Break(str);
	//	string temp;
	//	for (int i = 0; i < str.size(); i++)
	//	{
	//		if (str[i] > 'A'&&str[i] < 'E')
	//			temp += str[i] + 21;
	//		else if (str[i] > 'F'&&str[i] <= 'Z')
	//			temp += str[i] - 5;
	//		else
	//			temp += str[i];
	//	}
	//	cout << temp << endl;
	//}
	/*int n;
	while (cin >> n)
	{
		int flag = 0;
		for (int i = 1; i <= n; i++)
		{

		}
	}*/
	system("pause");
	return 0;
}