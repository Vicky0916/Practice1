//// version项目
//# include <windows.h>
//# include <iostream>
//// 利用进程和操作系统的版本信息的简单示例
//int main()
//{   // 提取这个进程的ID号
//	DWORD dwIdThis = ::GetCurrentProcessId();
//	// 获得这一进程和报告所需的版本，也可以发送0以便指明这一进程
//	DWORD dwVerReq = ::GetProcessVersion(dwIdThis);
//	WORD wMajorReq = (WORD)(dwVerReq > 16);
//	WORD wMinorReq = (WORD)(dwVerReq & 0xffff);
//	std::cout << "Process ID:" << dwIdThis << ",requires OS:"
//		<< wMajorReq << wMinorReq << std::endl;
//	// 设置版本信息的数据结构，以便保存操作系统的版本信息
//	OSVERSIONINFOEX osvix;
//	::ZeroMemory(&osvix, sizeof(osvix));
//	osvix.dwOSVersionInfoSize = sizeof(osvix);
//	// 提取版本信息和报告
//	::GetVersionEx(reinterpret_cast<LPOSVERSIONINFO>(&osvix));
//	std::cout << "Running on OS:" << osvix.dwMajorVersion << "."
//		<< osvix.dwMinorVersion << std::endl;
//	// 显示进程当前优先级
//	DWORD dwProcessP : GetPriorityClass(GetCurrentProcess());
//	std::cout << "Current process priority is:";
//	switch (dwProcessP) {
//	case HIGH_PRIORTY_CLASS:
//		std::cout << "High";
//		break;
//	case NORMAL_PRIORTY_CLASS:
//		std::cout << "Normal";
//		break;
//	case IDLE_PRIORTY_CLASS:
//		std::cout << "Idle";
//		break;
//	case REALTIME_PRIORTY_CLASS:
//		std::cout << "RealTime";
//		break;
//	default:
//		std::cout << "unknow";
//		break;
//	}
//	std::cout << std::endl;
//	// 如果是NTS (Windows 2000) 系统，则提高其优先权
//	if (osvix.dwPlatformld == VER_PLATFORM_WIN32_NT &&
//		osvix.dwMajorVersion >= 5)
//	{
//		if (dwProcessP != HIGH_PRIORITY_CLASS) {
//			// 如果当前优先级不是high，则改变优先级
//			::SetPriorityClass(
//				::GetCurrentProcess(),		// 利用这一进程
//				HIGH_PRIORITY_CLASS);		// 改变为high
//		// 报告给用户
//			dwProcessP = GetPriorityClass(GetCurrentProcess());
//			std::cout << "The process priority have been changed to ";
//			switch (dwProcessP)
//			{
//			case HIGH_PRIORITY_CLASS:
//				std::cout << "High";
//				break;
//			case NORMAL_PRIORITY_CLASS:
//				std::cout << "Normal";
//				break;
//			case IDLE_PRIORITY_CLASS:
//				std::cout << "Idle";
//				break;
//			case REALTIME_PRIORITY_CLASS:
//				std::cout << "Realtime";
//				break;
//			default:
//				std::cout << "<unknow>";
//				break;
//			}
//			std::cout << std::endl;
//		}
//	}

//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值是value的二进制位模式从左到右翻转后的值。
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
//#include <stdio.h>
//#include <stdlib.h>
//int Return(int n)
//{
//	int i,s;
//	for (i = 0; i < 32; i++)
//	{
//		s = n << 1;
//	}
//	return s;
//}
////unsigned int reverse_bit(unsigned int value)
////{
////
////}
//int main()
//{
//	int s = Return(3);
//	printf("%d ", s);
//	system("pause");
//	return 0;
//}

//1.
//#include <stdio.h>
//#include <stdlib.h>
//unsigned int  reverse_bit(unsigned int value)
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	for (a = 0; a < 32; a++)
//	{
//		ret = ret << 1;
//		b = value & 1;
//		value = value >> 1;
//		ret = b | ret;
//	}
//	return ret;
//}
//int main()
//{
//
//	printf("%u\n", reverse_bit(25));
//	system("pause");
//	return 0;
//}
//
//2.#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a, b,a1=0;
//	scanf_s("%d %d", &a, &b);
//	a1 = (a & b )+( (a ^ b )>> 1);
//	printf("%d ", a1);
//	system("pause");
//	return 0;
//}
//
//
//
//3.
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int arr[] = { 1,3,3,1,4,6,4,5,5 };
//	int i = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < len; i++)
//	{
//		arr[0] = arr[0] ^ arr[i];
//	}
//	printf("the single number is:%d", arr[0]);
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	int a[6] = { 1,2,3,2,1,4 };
//	int i,tmp,j,count;
//	for (i = 0; i < sizeof(a)/sizeof(a[0]); i++)
//	{
//		tmp = a[i];
//		count = 0;
//		for (j = 0; j < sizeof(a) / sizeof(a[0]); j++)
//		{
//			if (a[j] == tmp)
//			{
//				count++;
//			}
//		}
//		    if (count == 1)
//		    {
//			printf("%d ", tmp);
//		    }	
//	}
//	system("pause");
//	return 0;
//}
//
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//char * my_strcpy( char* dst,const char* src)
//{
//	assert(src && dst);
//	char* ret = dst;
//	while (*dst++ = *src++)
//	return ret;
//}
//int main()
//{
//	char dst[10] ;
//	 printf("%s\n", my_strcpy(dst, "hello"));
//	 system("pause");
//	 return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//char * my_strcat( char* dst, const char* src)
//{
//	    assert(dst && src);
//		char *ret = dst;
//		while (*dst != '\0')
//		{
//			dst++;
//		}
//		while (*dst++ = *src++)
//		return ret;
//}
//int main()
//{
//	char a[15] = "hello";
//	my_strcat(a, "world");
//	printf("%s \n", a);
//	system("pause");
//	return 0;
//}
//
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水， 
//给20元，可以多少汽水。
////#include <stdio.h>
////#include <stdlib.h>
////int main()
////{
////	int n;
////	scanf_s("%d", &n);
////	int total = n;
////	int empty = n;
////	while (empty>=2)
////	{
////		total += empty / 2;
////		empty = empty / 2 + empty % 2;
////	}
////	printf("%d\n", total);
////	system("pause");
////	return 0;
////
////	
////}

#include <stdio.h>
#include <stdlib.h>
#define N 3
//左下方
int find(int a[][N],int row,int col,int key)
{
	int x = row - 1, y = 0;
	while (x > 0 && y <= col)
	{
		if (key == a[x][y])
			return 1;
		else if (key < a[x][y])
			--x;
		else
			++y;	
	}
	return 0;
}
int main()
{
	int a[N][N] = { 1,2,3,4,5,6,7,8,9 };
	int key;
	scanf_s("%d", &key);
	if (find(a, N, N, key)
	{
		printf("OK，I can find it!\n");
	}
	else
		printf("Sorry,I can't find it!\n");
	system("pause");
	return 0;
}
	