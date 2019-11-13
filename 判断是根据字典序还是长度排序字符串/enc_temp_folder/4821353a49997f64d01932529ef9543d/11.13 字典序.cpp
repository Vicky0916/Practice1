#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<string> a;
	int n;
	cin >> n;
	a.resize(n);
	for (auto&e : a)
	{
		cin >> e;
	}
	int lexico = 1;
	int lengths = 1;
	for (int i = 1; i < a.size(); ++i)
	{
		if(a[i]>=a[i+1])
			{
				lexico=0;
				break;
			}
	}
	for (int i = 0; i < a.size()-1; i++)
	{
		if (a[i].size() >= a[i + 1].size())
		{
			lengths = 0;
			break;
		}
	}
	if (lexico == 1 && lengths == 1)
	{
		cout << "both" << endl;
	}
	else if (lexico == 1 && lengths == 0)
	{
		cout << "lexicographically" << endl;
	}
	else if (lexico == 0 && lengths == 1)
	{
		cout << "lengths" << endl;
	}
	else
	{
		cout << "none"<<endl;
	}
	system("pause");
	return 0;
}