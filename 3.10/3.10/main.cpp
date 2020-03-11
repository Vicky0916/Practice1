#include <iostream>
#include <stdlib.h>
#include <vector>
#include <set>
#include <string>
using namespace std;

//int main()
//{
//	int n;
//	vector<string> s1;
//	while (cin >> n)
//	{
//		set<string> s2;
//		for (int i = 0; i <= n; i++)
//		{
//			string s;
//			getline(cin, s);
//			s2.insert(s);
//		}
//		set<string>::iterator it;
//		for (it = s2.begin(); it != s2.end(); ++it)
//		{
//			cout <<"mkdir "<<"-p "<< *it << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}

int main()
{
	int n;
	while (cin >> n)
	{
		set<string> s;
		int count = 0;
		string first, second;
		for (int i = 0; i < n; i++)
		{
			cin >> first >> second;
			if (second == "connect")
			{
				s.insert(first);
			}
			else if (second == "disconnect")
			{
				s.erase(first);
			}
			int size = s.size();
			count = max(size, count);
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}