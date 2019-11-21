#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;

int main()
{

	/*int number = 0;
	while (getline(cin, str))
	{
		vector<string> v;
		int i = 0;
		while (i < str.size())
		{
			int begin = i;
			if (str[i] == '\"')
			{
				i++;
				while (i < str.size() && str[i] != '\"')
				{
					i++;
				}
				string tmp = str.substr(begin, i - begin + 1);
				v.push_back(tmp);
				i++;
			}
			begin = i;
			while (i < str.size() && str[i] != ' ')
			{
				i++;
			}
			if (str.size())
			{
				string tmp = str.substr(begin, i - begin + 1);
				v.push_back(tmp);
			}
			else
			{
				string tmp = str.substr(begin);
				v.push_back(tmp);
			}
		}
		cout << v.size() << number;
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i] << endl;
		}
	}*/
	string str1;
	string str;
	vector<string> v;
	getline(cin, str);
		for (int i = 0; i < str.size(); ++i)
		{
			if (str[i] != ' ')
			{
				if (str[i] == '"')
				{
					continue;
				}
				str1.push_back(str[i]);
			}
			else
			{
				v.push_back(str1);
				str1.clear();
			}
		}
		v.push_back(str1);
		cout << v.size()<< endl;
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i] << endl;
		}
	system("pause");
	return 0;
}