#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int Byte1Time(int n)
{
	int max = 0; int number = 0;
	int i = 0;
	while (n)
	{
		while (n&1 == 1)
		{
			number += 1;
			n=n >> 1;
		}
		if (number > max)
		{
			max = number;
		}
		number = 0;
		n=n >> 1;
	}	
	return max;
}

int main()
{
	int n;
	cin >> n;
	/*string s1;
	int ret=Byte1Time(s1);*/
	int ret = Byte1Time(n);
	cout << ret << endl;
	system("pause");
	return 0;
}

//#include <iostream>
//#include <stdlib.h>
//#include <string.h>
//using namespace std;
//int max_cur_bit1()
//{
//	int n;
//	cin >> n;
//	int max = 0;
//	while (n)
//	{
//		int count = 0;
//		while (n & 1 == 1)
//		{
//			count++;
//			n = n >> 1;
//		}
//		//�����ˣ�˵��1��������		
//		//�ȽϺ�֮ǰ��max,��Ļ��͸���max		
//		max = count > max ? count : max;
//		n = n >> 1;
//	}
//	return max;
//}
//int main()
//{
//	int ret=max_cur_bit1();
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}
