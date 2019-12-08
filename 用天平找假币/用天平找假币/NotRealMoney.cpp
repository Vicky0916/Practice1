//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//using namespace std;
//int HowMuchTime(int n)
//{
//	if (n == 2 || n == 3)
//		return 1;
//	if (n >= 4 && n <= 7)
//		return 2;
//	if (n >= 8 && n<= 10)
//		return 3;
//	int sum = HowMuchTime(n / 2) + 1;
//	return sum;
//}
//int main()
//{
//	/*int n;
//	vector<int> arr;
//	while (cin >> n)
//	{
//		if (n == 0)
//			break;
//		else
//			arr.push_back(n);
//	}
//	for (int i = 0; i < arr.size(); i++)
//	{
//		cout<<HowMuchTime(arr[i])<<endl;
//	}*/
//	int n;
//	while (cin >> n)
//	{
//		if (n == 0)
//			break;
//		else
//			cout << HowMuchTime(n) << endl;
//	}
//	system("pause");
//	return 0;
//}


#include<iostream>
using namespace std;
int main()
{
	http://www.taobao.com
	int n;
	while (cin >> n)
	{
		if (n == 0)
			break;
		int ans = 0;
		long long sum = 1;
		while (sum < n)
		{
			sum *= 3;
			ans++;
		}
		cout << ans << endl;
	}
}
