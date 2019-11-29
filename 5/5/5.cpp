#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Solution 
{
public:
	int romanToInt(string s)
	{
		int sum = 0;
		int len = s.length();
		for (int i = len - 1; i >= 0; i--)
		{
			switch (s[i])
			{
			case 'I':
				if (i < len - 1 && (s[i + 1]) == 'V' || s[i + 1] == 'X')
				{
					sum -= 1;
				}
				else
				{
					sum += 1;
				}
				break;
			case 'V':
				if (i < len - 1 && (s[i + 1]) == 'L' || s[i + 1] == 'C')
				{
					sum -= 10;
				}
				else
				{
					sum += 10;
				}

			case 'C':
				if (i < len - 1 && (s[i + 1]) == 'D' || s[i + 1] == 'M')
				{
					sum -= 100;
				}
				else
				{
					sum += 100;
				}
				break;
			case 'L':
				sum += 50;
				break;
			case 'D':
				sum += 500;
			case 'M':
				sum += 1000;
			default:
				break;
			}
		}
		return sum;
	}
};

int main()
{
	Solution s;
	string str;
	cout << "请输入一个罗马数字：" << endl;
	cin >> str;
	int ret;
	ret=s.romanToInt(str);
	cout <<"转成的罗马数字为："<<ret << endl;
	system("pause");
	return 0;
}