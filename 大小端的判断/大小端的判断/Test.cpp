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
		cout << "С�˻���" << endl;
	}
	else
		cout << "��˻���" << endl;
	system("pause");
}