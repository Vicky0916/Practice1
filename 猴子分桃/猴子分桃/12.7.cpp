#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 0)
			break;
		else
		{
			cout << (long)pow(5, n) - 4 << " " << (long)pow(4, n) + n - 4 << endl;
		}
	}
	system("pause");
	return 0;
}