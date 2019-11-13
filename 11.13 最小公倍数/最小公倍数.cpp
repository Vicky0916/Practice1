#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int m, n;
	cin >> m >> n;
	int min = m < n ? m : n;
	for (int i = min; i <= m*n; i++)
	{
		if (i%m == 0 && i%n == 0)
		{
			cout << i << endl;
			break;
		}
	}
	system("pause");
	return 0;
}