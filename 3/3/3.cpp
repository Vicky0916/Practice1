#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int n=0;
	int a[20];
	int number = 0;
	while (1)
	{
		cout << "��Ҫ������ٸ�����" << endl;
		cin >> n;
		cout << "�ڼ�����С������" << endl;
		cin >> number;
		cout << "��������Щ���֣�" << endl;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = 0; j < n - i - 1; j++)
			{
				if (a[j] > a[j + 1])
				{
					int temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
		}
		if (number > n)
		{
			cout << "NO RESULT" << endl;
		}
		else {
			cout << "��" << number << "С�����ǣ�" << endl;
			cout << a[number - 1] << endl;
		}
	}
	system("pause");
	return 0;
}