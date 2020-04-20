#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
//int main()
//{
//	while (1)
//	{
//		int n;
//		cin >> n;
//		int sum = 0;
//		int i = 1;
//		int k = 1;
//		for (i = 1; i <= n; i++)
//		{
//			sum += 1;
//			int m = n - i;
//			for (k = 1; k < m; k++)
//			{
//				sum += 1;
//			}
//		}
//		cout << sum << endl;
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	while (1)
//	{
//		int n;
//		cin >> n;
//		vector<int> v;
//		int num;
//		int ret = 0;
//		set<int> s;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> num;
//			v.push_back(num);
//		}
//		for (int i = 0; i < v.size() - 2; i++)
//		{
//			for (int j = i + 1; j < v.size() - 1; j++)
//			{
//				for (int k = j + 1; k < v.size(); k++)
//				{
//					if (v[i] < v[j] && v[j] < v[k])
//						s.insert(j);
//				}
//			}
//		}
//		cout << s.size() << endl;
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int m, n;
//	
//	vector<int> v;
//	
//	vector<int> v3;
//	cin >> m >> n;
//	for (int i = 0; i < m; i++)
//	{
//		int num;
//		cin >> num;
//		v.push_back(num);
//	}
//	vector<int> v1(v);
//	sort(v1.begin(), v1.end());
//	for (int j = v1.size() - n; j < v1.size(); j++)
//	{
//		for (int i = 0; i < v.size(); i++)
//		{
//			if (v1[j] == v[i])
//			{
//				v3.push_back(i);
//			}
//		}
//	}
//	sort(v3.begin(), v3.end());
//	/*cout << "V3:";
//	for (int i = 0; i < v3.size(); i++)
//	{
//		cout<< v3[i] << " ";
//	}*/
//	for (int i = 0; i < v3.size(); i++)
//	{
//		cout << v[v3[i]] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a, b, c, d, e, f, g,sum = 0;
//	int n;
//	cin >> n;
//	int i = 1;
//	for (i = 1; i < n; i++)
//	{
//		g = i % 10;
//		f = (i / 10) % 10;
//		e = (i / 100) % 10;
//		d = (i / 1000) % 10;
//		c = (i / 10000) % 10;
//		b = (i / 1000000) % 10;
//		a = (i / 1000000);
//		if ((a <= b) && (b <= c) && (c <= d) && (d <= e) && (e <= f) && (f <= g))
//		{
//			sum++;
//		}
//	}
//	cout << sum << endl;
//}

bool yuanyin(char c)
{
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		return true;
	else
		return false;
}
void f(string s)
{
	//for (int i = 0; i < s.size(); i++)
	int i = 0;
	int flag = 1;
	vector<int> v;
	while(i<s.size())
	{
			if (yuanyin(s[i]) == false)
			{
				while (i<s.size()&&yuanyin(s[i]) == false)
				{
					++i;
				}
				flag = 1;
				v.push_back(flag);
			}
			else
			{
				while (i < s.size()&&yuanyin(s[i]) == true)
				{
					i++;
				}
				flag = 2;
				v.push_back(flag);
			}
	}
	/*for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}*/
	if (v.size() == 4)
	{
		if (v[0] == 1 && v[1] == 2 && v[2] == 1 && v[3] == 2)
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "no"<<endl;
		}
	}
	else
	{
		cout << "no" << endl;
	}
}
int main()
{
	while (1 
	{
		string s;
		cin >> s;
		f(s);
	}
	
	system("pause");
	return 0;
}