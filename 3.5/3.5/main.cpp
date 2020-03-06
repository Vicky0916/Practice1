#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;
//1 2 4 8 16
//1 2 3 4 5 
//int F(int n)
//{
//	int a1 = 1;
//	int sum = 0;
//	if (n == 1)
//		return 1;
//	for (int i = 0; i < n - 1; i++)
//	{
//		sum = a1 * 2;
//		a1 = sum;
//	}
//	return sum;
//}
//class Test
//{
//public:
//	void Rabbit();
//private:
//	long long int a[91];
//	int i;
//};
//
//void Test::Rabbit()
//{
//	int n;
//	for (i = 0; i < 91; i++)
//	{
//		if (i == 0)
//		{
//			a[i] = 1;
//		}
//		else if (i == 1)
//		{
//			a[i] = 2;
//		}
//		else
//		{
//			a[i] = a[i - 1]+a[i-2];
//		}
//	}
//	while (cin >> n)
//	{
//		cout << a[n - 1] << endl;
//	}
//}
//int main()
//{
//	/*int n;
//	while (cin >> n)
//	{
//		int ret = F(n);
//		cout << ret << endl;
//	}*/
//	Test t;
//	t.Rabbit();
//	system("pause");
//	return 0;
//}

int main()
{
	int n;
	while (cin >> n)
	{
		getchar();
		string name;
		for (int i = 0; i < n; ++i)
		{
			getline(cin, name);
			if (i != n - 1)
			{
				if (name.find(',') != string::npos || name.find(' ') != string::npos)
					cout << "\"" << name << "\"" << "," << " ";
				else
					cout << name << "," << " ";
			}
			else
			{
				if (name.find(',') != string::npos || name.find(' ') != string::npos)
					cout << "\"" << name << "\"" << endl;
				else
					cout << name << endl;
			}
		}
	}
	system("pause");
	return 0;
}
