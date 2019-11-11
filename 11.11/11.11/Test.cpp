//#include  <iostream>
//#include <stdlib.h>
//using namespace std;
//
//char fun(char x, char y)
//{
//	if (x < y)
//	{
//		return x;
//	}
//	return y;
//}
//int main()
//{
//	int a = '1'; int b = '1'; int c = '2';
//	cout << fun(fun(a, b), fun(b, c));
//	system("pause");
//	return 0;
//}

class solution {
	int StringToInt(string str)
	{
		int num = 0;
		int n = 0;

		for (int i = str.length(); i >0; i--)
		{
			char c = str[i];
			if (c - '0' > 9)
			{
				return 0;
			}
			if (c == '+')
			{
				return num;
			}
			if (c == '-')
			{
				return -num;
			}
			num = num + (c - '0')*pow(10, n);
			n++;
		}
		return num;
	}
	

};