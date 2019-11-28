#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
//string ThelongestSameStr(string *str1, string *str2)
//{
//	string *p1 = str1;
//	string *p2 = str2;
//	int i = 0, j = 0;
//	int length = 0;
//	int maxlength = 0;
//	int ret1 = 0, ret2 = 0,ret3=0;//保存第一次和最后一次出现公共部分的位置
//	//for (i = 0; i < str1->length; i++)
//	//{
//	while (i < str1->length)
//	{
//		//for (j = 0; j < str2->length; j++)
//		while (j < str2->length)
//		{
//			while (str1[i] == str2[j])
//			{
//				ret1 = i;
//				i++;
//				j++;
//				length++;
//			}
//			if (length > maxlength)
//			{
//				maxlength = length;
//				ret3 = ret1;
//				ret2 = i;
//			}
//			j = 0;
//		}
//
//	}
//		
//	//}
//	
//
//}
string find(string str1, string str2)
{
	string str_m;
	if (str1.size() > str2.size())
	{
		swap(str1, str2);
	}
	for (int i = 0; i < str1.size(); i++)
	{
		for (int j = i; j < str1.size(); j++)
		{
			string temp = str1.substr(i, j - i + 1);
			if ((int)str2.find(temp) < 0)
			{
				break;
			}
			else if (str_m.size() < temp.size())
			{
				str_m = temp;
			}
		}
	}
	cout << str_m << endl;
}
int main()
{
	string a, b;
	while (cin >> a >> b)
	{
		if (a.size() > b.size())
		{
			swap(a, b);
		}
		string str_m;//存储最长公共子串
		for (int i = 0; i < a.size(); i++)
		{
			for (int j = i; i < a.size(); j++)
			{
				string temp = a.substr(i, j - i + 1);
				if (int(b.find(temp)) < 0)
					break;
				else if (str_m.size() < temp.size())
					str_m = temp;
			}
		}
		cout << str_m << endl;
	}
	system("pause"); 
	return 0;
}