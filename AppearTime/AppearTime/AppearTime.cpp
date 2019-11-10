#include <iostream>
#include <stdlib.h>
using namespace std;
int AppearTime(int str[])
{
	int *key = str;
	int count[256];
	int i;
	int len = sizeof(str) / sizeof(str[0]);
	for (i = 0; i < 256; i++)
	{
		count[i] = 0;
	}
	while (*(key))
	{
		count[*(key++)]++;
	}
	key = str;
	while (*(key))
	{
		if (count[*(key)] > (len / 2))
		{
			return *(key);
		}
		key++;
	}
	return 0;
}
int main()
{
	int a[10] = { 1,2,3,2,2,2,5,4,2 };
	//AppearTime(a);
	int ret = AppearTime(a);
	cout << ret << endl;
	system("pause");
	return 0;
}