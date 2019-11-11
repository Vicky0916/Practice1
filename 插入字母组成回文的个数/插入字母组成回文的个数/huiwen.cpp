#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>
#include <vector>
using namespace std;
class solution
{
public:
	int HuiWen(string& str)
	{
		string s1(str);
		int len = str.size();
		int begin = 0;
		int end = len - 1;
		int i = 0, j = 0;
		while (begin < end)
		{
			swap(str[begin], str[end]);
			begin++;
			end--;
		}
		while (i < len&&j < len)
		{
			if(str[i] == s1[j])
			{
				i++;
				j++;
			}
			else
			{
				return 1;
			}
		}
		return 0;
	}
	void HuiWenNumber(string str, string s)
	{
		int i = 0;
		int flag = 0;
		while (i < str.size()+1)
		{
			string tmp = str;
			tmp.insert(i,s);
			if (0 == HuiWen(tmp))
			{
				flag++;
			}
			i++;
		}
		cout << flag << " " << endl;
	}
	
};

int main()
{
	solution c;
	string v ;
	string s;
	cin >> v;
	cout << endl;
	cin >> s;
	c.HuiWenNumber(v, s);
	system("pause");
	return 0;
}