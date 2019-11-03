#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class solution
{
public:
	int ret = 0;   //产生的进位项
	int temp;    //两数相加的结果
	string add(string str1, string str2)
	{
		int len1 = str1.length();
		int len2 = str2.length();
		string str;
		if (len1 < len2)
		{
			for (int i = 1; i < len2 - len1; i++)
			{
				str1 = "0" + str1;
			}
		}
		else
		{
			for (int i = 1; i < len1 - len2; i++)
			{
				str1 = "0" + str1;
			}
		}
		
		len1 = str1.length();
		for (int i = len1; i > 0; i--)
		{
			temp = str1[i] - '0' + str2[i] - '0' + ret;
			if (temp >= 10)
			{
				ret = 0;
				temp -= 10;
			}
			str = char(temp + '0') + str;
		}
		if (ret == 1)
		{
			str = char(ret + '0') + str;
		}
		return str;
   }
};
int main() 
{
	solution s;
	string answer=s.add("12345", "2345");
	//for (int i = 0; i < answer.length(); i++)
	//{
		cout << answer << endl;
	//}
	system("pause");
	return 0;
}