#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
using namespace std;
//int getValue(vector<int> gifts, int n)
//{
	/*int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		gifts.push_back(temp);
	}
	sort(gifts.begin(), gifts.end());
	return gifts[n / 2];*/
//}
//int getValue(vector<int> gifts, int n)
//{
//	gifts.push_back(1);
//	gifts.push_back(2);
//	gifts.push_back(3);
//	gifts.push_back(2);
//	gifts.push_back(2);
//	sort(gifts.begin(), gifts.end());
//	return gifts[n / 2];
//}
int getValue(vector<int> gifts, int n)
{
	sort(gifts.begin(), gifts.end());
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (gifts[i] == gifts[n / 2])
			count++;
	}
	if (count > n / 2)
	{
		return gifts[n / 2];
	}
	else
		return 0;
}
int main()
{
	vector<int> gifts;
	int n=0;
	int ret = 0;
	cin >> n;
	ret=getValue(gifts, n);
	cout << ret << endl;
	system("pause");
	return 0;
}