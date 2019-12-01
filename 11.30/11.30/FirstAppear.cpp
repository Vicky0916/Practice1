#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;
//void firstappear(string str)
//{
//	    int j = 0;
//		int count[256] = { 0 };
//		for (int i = 0; i < str.size(); i++)
//		{
//			count[str[i]] += 1;
//		}
//		for (j = 0; j < str.size(); j++)
//		{
//			if (count[str[j]] == 1)
//			{
//				cout << str[j] << endl;
//				return;
//			}
//		}
//			cout << -1 << endl;
//}

int main()
{
	/*string str;
	while (cin >> str)
	{
		firstappear(str);
	}*/
	int n;
	int force;
	while (1)
	{
		cin >> n>> force;
		int max = 0;
		vector<int> a;
		int temp;
		for (int i = 0; i < n; i++)
		{
			cin >> temp;
			a.push_back(temp);
		}
		for (int i = 0; i < n; i++)
		{
			if (force >= a[i])
			{
				force += a[i];
			}
			else  //怪兽的能量大，要找最大公约数
			{
				for (int j = 1; j <= force; j++)
				{
					if (a[i] % j == 0 && force%j == 0)
					{
						if (j > max)
							max = j;
					}
				}
				force += max;
			}
		}
		cout << force << endl;
	}
	system("pause");
	return 0;
}