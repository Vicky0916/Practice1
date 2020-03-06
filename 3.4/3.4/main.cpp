//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//int F(int n)
//{
//	if (n == 1||n==2)
//		return 1;
//	int a1 = 1, a2 = 1;
//	long long a3 = 0;
//	for (int i = 0; i < n - 2; i++)
//	{
//		a3 = a1 + a2;
//		a1 = a2;
//		a2 = a3;
//	}
//
//	return a3;
//}
//
//int main()
//{
//	int n;
//	while (cin>> n)
//	{
//		long long ret = F(n);
//		cout << ret << endl;
//	}
//
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdio.h>
using namespace std;


//class ff
//{
//public:
//	void count();
//	void output();
//private:
//	int i;
//	long long int a[81];
//};
//void ff::count()
//{
//	int b, c;
//	long long int sum=0;
//	for (i = 1; i <= 80; i++)
//	{
//		if (i == 1 || i==2)
//			a[i] = 1;
//		else a[i] = a[i - 1] + a[i - 2];
//	}
//	while (cin >> b >> c)
//	{
//		for (int j = b; j <= c; j++)
//		{
//			sum += a[j];
//		}
//		cout << sum << endl;
//		sum = 0;
//	}
//	
//}
//void ff::output()
//{
//	for (i = 1; i <= 80; i++)
//	{
//		cout << a[i] << endl;
//	}
//}
//int main() 
//{
//	ff d;
//	d.count();
//	
//	//a.output();
//	
//	system("pause");
//	return 0;
//
//}

int TheSame(string s1, string s2)
{
	int sum = 0;
	int j = 0;
	int i = 0;
	
	//for (i = 0; i < s1.size(); i++)
	while (i < s1.size())
	{
		while (s1[i]!='0'&&s2[j]!='\0'&&s1[i] == s2[j])
		{
			i++;
			j++;
		}
		if (j == s2.size() && s1[i-1]!='\0')
		{
			sum++;
			j = 0;
		}
		else if (j < s2.size()) 
		{
			j = 0;
			i++;
		}
		else
		{
			i++;
		}
	}
	return sum;
}
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{
		int ret = 0;
		ret=TheSame(s1, s2);
		cout << ret << endl;
	}
	system("pause");
	return 0;
}



