#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>
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
vector <int> a;
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
	if (0==ISSushu(n))
	{
		for (int i = 2; i < n; i++)
		{
			if (n%i == 0)
			{
				a.push_back(i);
				n = n / i;
				break;
			}
		}
		Components(n);
		if (1 == ISSushu(n))
		{
			a.push_back(n);
		}
	}
	return 0;
}
int main()
{
	int n; int flag = 1;
	while (cin >> n)
	{
		if (n <= 2 || n == 3)
			break;
		Components(n);
		
		for (int i = 0; i < a.size() - 1; i++)
		{
			for (int j = 0; j < a.size() - i - 1; j++)
			{
				if (a[j] < a[j + 1])
				{
					int temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
		}
		/*for (int i = 0; i < a.size(); i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;*/
		int temp = a[0];
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i] != temp)
			{
				flag++ ;
				temp = a[i];
			}
		}
		cout << flag << endl;
		flag = 1;
		a.clear();
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