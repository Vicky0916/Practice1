#include <iostream>
#include <stdlib.h>
using namespace std;
int F(int n1,int n2)
{
	int i = 0;
	int sum=0��
	while (n1)
	{
		n1 = n1 % n2;
		sum += n1 + n1*pow(10, i);
		i++;
	}
	return n1;
}
int main()
{
	int n;
	cout << "������һ��ʮ�������֣�" << endl;
	cin >> n;
	int number;
	cout << "��������Ҫת���ļ���������" << endl;
	int ret=F(n, number);
	cout << ret;
	cin>>number;
}