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
		cout << "�ҵ�����"<<endl;
	}

	s.erase(pos);
	cout << "ɾ����" << endl;
	for (auto e : s)
	{
		cout << e << " ";
		++e;
	}
	cout << endl;

	s.clear();
	cout << "��պ�" << endl;
	for (auto e : s)
	{
		cout << e << " ";
		++e;
	}
	cout << endl;*/
	map<string, string> m;
	m.insert(make_pair("Apple", "ƻ��"));
	m.insert(make_pair("Pair", "��"));
	m.insert(make_pair("Right", "�ұ�"));
	//m.insert(make_pair("Right", "��ȷ"));
	m.insert(make_pair("Banana", "�㽶"));
	m.insert(make_pair("Orange", "����"));
	m.insert(make_pair("Grap", "����"));

	for(map<string,string>::iterator e=m.begin();e!=m.end();e++)
	{
		cout << e->first << ":" << e->second << endl;
	}
	cout << endl;
	map<string, string>::iterator it;
	it = m.find("Banana");
	if (it != m.end())
	{
		cout << "�ҵ��ˣ��õ��ʵ������ǣ�" << it->second << endl;
	}
	else
	{
		cout << "û���ҵ���";
	}
	cout << endl;

	
	m.erase(it);
	cout << "ɾ�����ҵ���Ԫ�غ�,ʣ���Ԫ��Ϊ��" << endl;
	map<string, string>::iterator e1;
	for (e1 = m.begin(); e1 != m.end(); e1++)
	{
		cout << e1->first << ":" << e1->second << endl;
	}
	cout << endl;
	cout << "�޸ĺ�" << endl;
	map<string, string>::iterator e2;
	m.insert(make_pair("Right", "��ȷ"));
	for (e2 = m.begin(); e2 != m.end(); e2++)
	{
		cout << e2->first << ":" << e2->second << endl;
	}
	system("pause");
	return 0;
}