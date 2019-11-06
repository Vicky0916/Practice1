//class solution 
//{
//	int strstr(string str1, string str2)
//	{
//		int len1 = str1.size();
//		int len2 = str2.size();
//		int i = 0, j = 0;
//		for ( i = 0; i < len1; i++)
//		{
//			if (str1[i] == str2[j])
//			{
//				j++;
//			}
//			if (j == len2)
//			{
//				return i - len2;
//			}
//			else
//			{
//				i -= j;  //退回去
//				j = 0;
//			}
//		}
//		if (j == len2)
//		{
//			return i - len2;
//		}
//	}
//
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	/*int x = 0;
	int y = 0;
	
	for (x = 0, y = 0; (y = 123) && (x < 4); x++)
		cout << "输出结果: " << endl;
	system("pause");
	return 0;*/
	int n;
	int k = 0;
	int i = 0;
	int j = 0;
	int sum = 0;
	cin >> n;
	int a[100];
	
	for (k = 0; k < 3*n; k++)
	{
		cin >> a[k];
	}
	for (i = 0; i < 3*n; i++)
	{
		for (j = 0; j < 3*n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (int p = n; p <= 3 * n-2 ; p += 2)
	{
		sum += a[p];
	}
	cout << sum << " ";
		system("pause");
	return 0;
}


























//};