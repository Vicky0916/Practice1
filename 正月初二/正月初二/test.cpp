//#include <iostream>

//#include <cstring>
//using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int func(int a)
{
	int b;
	switch (a)
	{
	case 1:b = 30;
	case 2:b = 20;
	case 3:b = 16;
	default: b = 0;
	}
	return b;
}
int main()
{
	/*int a=func(1);
	cout << a;*/
	/*int n = 2;
	int c = n += n -= n * n;
	cout << c;*/
	/*char *p = "abcdefgh",  *r;
	long *q;
	q = (long*)p;
	q++;
	r = (char*)q;
	cout << r;*/
	/*char str[] = "ABCD", *p = str;
	cout << *(p + 4)<<endl;*/
	/*int a, b;
	cin >> a >> b;
	if (a > b)
	{
		a = b;
		b = a;
	}
	else
	{
		a++;
		b++;
	}
	cout << a << " "<< b << endl;*/
	char s[] = "abcdefgh", *p = s;
	p += 3;
	printf("%d",strlen(strcpy(p,"ABCD")));
	system("pause");
	return 0;
////	int sum=7;
////	int num = sum;
////	sum = num++;
////	sum++;
////	++num;
////	cout << sum << endl;
////
////	/*for (int i = 0; i < str.size(); i++)
////	{
////		if (str[i] >= 'A'&&str[i] <= 'Z')
////		{
////			str[i] |= 32;
////		}
////	}
////	return str;*/
////}
////};
	/*int i = 0, a = 0;
	while (i < 20)
	{
		for (;;)
		{
			if ((i % 10) == 0) break;
			else i--;
		}
		i += 11; a += i;
	}
	cout << a << endl;
	system("pause");
	return 0;*/
}
////
////class solution
////{
////	public void rotate(int[] nums, int k)
////	{
////		//1 2 3 4 5 6  ÓÒÐýÁ½Î»
////		//5 6 1 2 3 4 
////		int n = nums.size() - k;
////		for (int i = 0; i < n; i++)
////		{
////			nums.push_back(nums[i]);
////		}
////		
////	}
////
////}
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//int main()
//{
//	int x = 10;
//	int y = 10;
//	x = y = ++y;
//	cout << x << " " << y;
//	system("pause");
//	return 0;
//}
//
//class solution {
//	public int removeElement(int[] nums, int val)
//	{
//		int j = 0;
//		for (int i = 0; i < nums.size(); i++)
//		{
//			if (nums[i] != val)
//			{
//				nums[j++] = nums[i];
//			}
//		}
//		return j;
//	}
//};
//
//
//
//
//
//
//
//
//
//
//

//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//int main()
//{
//	
//}