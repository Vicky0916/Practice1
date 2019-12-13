#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int Howmany(int n)
{
	int k = 0;
	for (int i = 2; i < sqrt(n); i++)
	{
		if (n%i == 0)
		{
			while (n%i == 0)
			{
				n = n / i;
			}
			++k;  
		}
	 }
	/*if (n != 1)
	{
		k++;
	}*/
	return k;
}
int main()
{
	int n;
	while (cin >> n)
	{
		int ret=Howmany(n);
	
		cout << ret<<endl;
	}
	system("pause");
	return 0;
}