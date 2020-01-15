#include <iostream>
#include <stdlib.h>
using namespace std;
union Test
{
	int a;
	char b;
};
int main()
{
	Test t;
	t.a = 1;
	if (t.b== 1)
	{
		cout << "小端机器" << endl;
	}
	else
		cout << "大端机器" << endl;
	system("pause");
}