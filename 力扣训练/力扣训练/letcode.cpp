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
//	printf("结果是：%d\n",ret);
//	system("pause");
//	return 0;
//}
//翻转字符串
//class Solution {
//public:
//	int reverse(int x)
//	{
//		int ret = 0;
//		while (x != 0)
//		{
//			if (ret > INT32_MAX / 10 || (ret == INT32_MAX / 10 && x % 10 > 7))
//				return 0;
//			if (ret < INT32_MIN / 10 || (ret == INT32_MIN / 10 && x % 10 < -8))
//				return 0;
//			ret = ret * 10 + x % 10;
//			x = x / 10;
//		}
//		return ret;
//	}
//	int test()
//	{
//		int a = 123;
//		int ret = reverse(a);
//		cout << ret << endl;
//		system("pause");
//		return 0;
//	}
//};
//int main()
//{
//	Solution a;
//	a.test();
//}
//罗马数字转换为数字
//class Solution {
//public:
//	int romanToInt(string s)
//	{
//		int sum = 0;
//		int len = s.length();
//		for (int i = len - 1; i >= 0; i--)
//		{
//			switch (s[i])
//			{
//			case 'I':
//				if (i < len - 1 && (s[i + 1]) == 'V' || s[i + 1] == 'X')
//				{
//					sum -= 1;
//				}
//				else
//				{
//					sum += 1;
//				}
//				break;
//			case 'V':
//				if (i < len - 1 && (s[i + 1]) == 'L' || s[i + 1] == 'C')
//				{
//					sum -= 10;
//				}
//				else
//				{
//					sum += 10;
//				}
//
//			case 'C':
//				if (i < len - 1 && (s[i + 1]) == 'D' || s[i + 1] == 'M')
//				{
//					sum -= 100;
//				}
//				else
//				{
//					sum += 100;
//				}
//				break;
//			case 'L':
//				sum += 50;
//				break;
//			case 'D':
//				sum += 500;
//			case 'M':
//				sum += 1000;
//			default:
//				break;
//			}
//		}
//		return sum;
//	}
//};

