#include <iostream>
#include <stdlib.h>
#include <string>
#include <set>
#include <map>

using namespace std;

int main()
{
	/*set<int> s;
	s.insert(1);
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(3);
	s.insert(4);
	for (auto e : s)
	{
		cout << e << " ";
		++e;
	}
	cout << endl;

	set<int>::iterator pos = s.find(3);
	if (pos != s.end())
	{
		cout << "找到啦！"<<endl;
	}

	s.erase(pos);
	cout << "删除后：" << endl;
	for (auto e : s)
	{
		cout << e << " ";
		++e;
	}
	cout << endl;

	s.clear();
	cout << "清空后：" << endl;
	for (auto e : s)
	{
		cout << e << " ";
		++e;
	}
	cout << endl;*/
	map<string, string> m;
	m.insert(make_pair("Apple", "苹果"));
	m.insert(make_pair("Pair", "梨"));
	m.insert(make_pair("Right", "右边"));
	//m.insert(make_pair("Right", "正确"));
	m.insert(make_pair("Banana", "香蕉"));
	m.insert(make_pair("Orange", "橘子"));
	m.insert(make_pair("Grap", "葡萄"));

	for(map<string,string>::iterator e=m.begin();e!=m.end();e++)
	{
		cout << e->first << ":" << e->second << endl;
	}
	cout << endl;
	map<string, string>::iterator it;
	it = m.find("Banana");
	if (it != m.end())
	{
		cout << "找到了！该单词的中文是：" << it->second << endl;
	}
	else
	{
		cout << "没有找到！";
	}
	cout << endl;

	
	m.erase(it);
	cout << "删除刚找到的元素后,剩余的元素为：" << endl;
	map<string, string>::iterator e1;
	for (e1 = m.begin(); e1 != m.end(); e1++)
	{
		cout << e1->first << ":" << e1->second << endl;
	}
	cout << endl;
	cout << "修改后：" << endl;
	map<string, string>::iterator e2;
	m.insert(make_pair("Right", "正确"));
	for (e2 = m.begin(); e2 != m.end(); e2++)
	{
		cout << e2->first << ":" << e2->second << endl;
	}
	system("pause");
	return 0;
}