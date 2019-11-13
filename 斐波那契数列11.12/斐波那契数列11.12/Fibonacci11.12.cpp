//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//void Fibonacci(int n)
//{
//	int *a = new int[1000];
//	int a1 = 0, a2 = 1;
//	int sum = 0;
//	while (sum < 100000)
//	{
//		 int ret = sum;
//		 sum = a1 + a2;
//		 a1 = a2;
//		 a2 = sum;
//		 if (n > ret && n < sum)
//		 {
//			 if (n - ret < abs(sum - n))
//			 {
//				 cout << n - ret << " ";
//				 break;
//			 }
//			 else
//			 {
//				 cout << sum - n << " ";
//				 break;
//			 }
//		 }
//		 
//	}
//	cout << endl;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	Fibonacci(n);
//	system("pause");
//	return 0;
//}
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a1 = 0, a2 = 1;
	int sum = 0;
	while (true)
	{
		int ret = sum;
		sum = a1 + a2;

		if (n >= ret && n <= sum)
		{
			if (n - ret < sum - n)
			{
				cout << n - ret << " ";
				break;
			}
			else
			{
				cout << sum - n << " ";
				break;
			}
		}
		a1 = a2;
		a2 = sum;
	}

	system("pause");
	return 0;
}