//#include <stdio.h>
//#include <stdlib.h>
//
//int func()
//{
//	int i, j, k = 0;
//	for (i = 0, j = -1; j = 0; i++, j++)
//	{
//		k++;
//	}
//	return k;
//}
//
//
//int main()
//{
//	int i = 8;
//	
//	char a[10] = { '1','2','3','4','5','6','7','8','9',0 };
//	char *p = a + i;
//
//	printf("%s\n", p - 3);
//	int ret = func();
//	printf("%d \n",ret);
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
int main()
{
	vector<int> array;
	array.push_back(100);
	array.push_back(300);
	array.push_back(300);
	array.push_back(300);
	array.push_back(300);
	array.push_back(500);
	vector<int>::iterator itor;
	for (itor = array.begin(); itor != array.end(); itor++)
	{
		if (*itor == 300)
		{
			itor = array.erase(itor);
		}
	}
	for (itor = array.begin(); itor != array.end(); itor++)
	{
		cout << *itor << " ";
	}
	system("pause");
	return 0;
}