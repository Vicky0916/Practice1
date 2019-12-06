#include <iostream>
#include <stdlib.h>
using namespace std;
//int JumpStep(int n)
//{
//	//int sum = 0;
//	//int a1 = 1;
//	//int a2 = 2;
//	////if (n == 1)
//	//	return 1;
//	//if (n == 2)        //1 2 3 4 5 
//	//	return 2;      //1 2 4 8 16
//	return pow(2, n - 1);
//	
//}

void CanPutIn(double R, double Len)
{
	double Total = 3.14 * 2 * R;
	if (Len < Total)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}
int main()
{/*
	int n;
	while (cin >> n)
	{
		int ret = JumpStep(n);
		cout << ret << endl;
	}*/
	double R, Len;
	while (cin >> R >> Len)
	{
		CanPutIn(R, Len);
	}
	system("pause");
	return 0;
}
