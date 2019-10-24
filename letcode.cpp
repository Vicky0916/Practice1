//#include <stdio.h>
//#include <malloc.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
//int* twoSum(int* nums, int numsSize, int target, int* returnSize)
//{
//	int *res = (int*)malloc(sizeof(int) * 2);
//	for (int i = 0; i < numsSize - 1; i++)
//	{
//		for (int j = i + 1; j < numsSize; j++)
//		{
//			if (nums[i] + nums[j] == target)
//			{
//				res[0] = i;
//				res[1] = j;
//				*returnSize = 2;
//				return res;
//			}
//		}
//	}
//	return  res;
//}
//
//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int *ret=twoSum(a, sizeof(a) / sizeof(a[0]), 3, a);
//	printf("½á¹ûÊÇ£º%d\n",ret);
//	system("pause");
//	return 0;
//}
class Solution {
public:
	int reverse(int x)
	{
		int ret = 0;
		while (x != 0)
		{
			if (ret > INT32_MAX / 10 || (ret == INT32_MAX / 10 && x % 10 > 7))
				return 0;
			if (ret < INT32_MIN / 10 || (ret == INT32_MIN / 10 && x % 10 < -8))
				return 0;
			ret = ret * 10 + x % 10;
			x = x / 10;
		}
		return ret;
	}
	int test()
	{
		int a = 123;
		int ret = reverse(a);
		cout << ret << endl;
		system("pause");
		return 0;
	}
};
int main()
{
	Solution a;
	a.test();
}