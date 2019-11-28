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
		cout << "你要输入多少个数？" << endl;
		cin >> n;
		cout << "第几个最小的数？" << endl;
		cin >> number;
		cout << "请输入这些数字：" << endl;
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
			cout << "第" << number << "小的数是：" << endl;
			cout << a[number - 1] << endl;
		}
	}
	system("pause");
	return 0;
}