#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
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
	int i = 0, a = 0;
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
	return 0;
}
////
////class solution
////{
////	public void rotate(int[] nums, int k)
////	{
////		//1 2 3 4 5 6  ������λ
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