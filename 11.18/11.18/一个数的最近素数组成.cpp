#include <iostream>
#include <stdlib.h>
using namespace std;
//20  --> 3,17 14  5,15 10    7,13 6    9,11  2  
//10   1,9 8  3,7 4  5,5 0

int IsSushu(int n)
{
	int i = 2;
	while (i < n)
	{
		if (n%i != 0)
		{
			++i;
		}
		else 
		{
			return 1;
			break;
		}
	}
	return 0;  //ÊÇËØÊý
}
int main()
{
	int n; int i = 2;
	int min = 9999;
	int temp1 = 0, temp2 = 0;
	cin >> n; 
	while(i<n)
	{
		if (0 == IsSushu(i))
		{
			int j = n - i;
			if (j == i)
			{
				break;
			}
			if (0 == IsSushu(j))
			{
				int ret = abs(j - i);
				if (ret < min)
				{
					min = ret;
					temp1 = i;
					temp2 = j;
				}
			}
		}
		i++;
	}
	cout << temp1 << " " << temp2 << endl;
	//IsSushu(n);
	system("pause");
	return 0;
}