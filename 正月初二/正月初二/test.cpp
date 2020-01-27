#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int sum=7;
	int num = sum;
	sum = num++;
	sum++;
	++num;
	cout << sum << endl;

	system("pause");
	return 0;
}