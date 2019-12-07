#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

void oddInOddEvenInEven(vector<int>& arr, int len)
{
	/*for (int i = 0; i < len; i+=2)
	{
		if (arr[len-1] % 2 == 0)
		{
			swap(arr[len 
		}
	}*/
	int i = 0, j = 1;
	while (i < len && j < len) 
	{
		if (arr[len - 1] % 2 == 0)
		{
			swap(arr[i], arr[len - 1]);
			i += 2;
		}
		if (arr[len - 1] % 2 == 1)
		{
			swap(arr[j], arr[len - 1]);
			j += 2;
		}
	}
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	vector<int> a = { 1,9,3,2,7,9,0,5,4,6 };
	oddInOddEvenInEven(a, a.size());
	system("pause");
	return 0;
}
