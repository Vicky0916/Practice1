//////#define _CRT_SECURE_NO_WARNINGS
//////#include <stdio.h>
//////#include <stdlib.h>
//////#define N 3
////////左下方
//////int find(int a[N][N], int row, int col, int key)
//////{
//////	int x = row - 1, y = 0;
//////	while (x > 0 && y <= col)
//////	{
//////		if (key == a[x][y])
//////			return 1;
//////		else if (key < a[x][y])
//////			--x;
//////		else
//////			++y;
//////	}
//////	return 0;
//////}
//////int main()
//////{
//////	//int a[N][N] = {1,2,3,4,5,6,7,8,9 };
//////	int key;
//////	printf("Please enter a number:\n");
//////	scanf_s("%d", &key);
//////	if (find(a, N, N, key))
//////		printf("OK，I can find it!\n");
//////	else
//////		printf("Sorry,I can't find it!\n");
//////		system("pause");
//////		return 0;
//////}
////
//////#include <stdio.h>
//////#include <stdlib.h>
//////#include <string.h>
//////void Adjust(int a[])
//////{
//////	int i, j=0,k=0,count1=0,count2=0;
//////	int b[100],c[100];
//////	//int *p=a;
//////	int sz = sizeof(a) / sizeof(a[0]);
//////	for (i = 0; i < sz; i++)
//////	{
//////		//for (j = 0; j < sz; j++)
//////		if (a[i] % 2 != 0)  //奇数
//////		 {
//////		   c[j] = a[i];
//////		   j++;
//////		   count1++;
//////		   }
//////		else  //偶数
//////		{
//////			b[k] = a[i];
//////			k++;
//////			count2++;
//////		}	
//////	}
//////	    for (j = 0; j < count1; j++)
//////		{
//////			printf("%d ", c[j]);
//////		}
//////
//////			for (k = 0; k < count2; k++)
//////			{
//////				printf("%d ", b[k]);
//////			}
//////		return ;
//////	
//////}
//////int main()
//////{
//////	int a[100];
//////	for (int i = 0; i < 5; i++)
//////	scanf_s("%d", &a[i]);
//////	Adjust(a);
//////	system("pause");
//////	return 0;
//////}
////
//////#include<stdio.h>
//////#include <stdlib.h>
//////void adjust(int a[], int len)
//////{
//////	int i = 0, j = 0, temp = 0;
//////	for (i = 0; i < len - 1; i++)
//////	{
//////		for (j = 0; j < len - 1; j++)
//////		{
//////			if (a[j] % 2 != 0)
//////			{
//////				temp = a[j];
//////				a[j] = a[j + 1];
//////				a[j + 1] = temp;
//////			}
//////		}
//////	}
//////}
//////int main()
//////{
//////	int a[9] = { 1,2,3,4,5,6,7,8,9 };
//////	int sz = 0;
//////	int i = 0;
//////	sz = sizeof(a) / sizeof(a[0]);
//////	adjust(a, sz);
//////	for (i = 0; i < sz; i++)
//////	{
//////		printf("%d ", a[i]);
//////	}
//////	system("pause");
//////	return 0;
//////}
////
////
////模拟实现strncat  将src的n个字符连接到dst
////#include <stdio.h>
////#include <assert.h>
////#include <stdlib.h>
////char my_strncat(char* dst, const char* src, size_t n)
////{
////	assert(dst && src);
////	char* p = dst;
////	while (*dst)
////	{
////		dst++;
////	}
////	while ( n-- && *src)
////	{
////		*dst++ = *src++;
////	}
////	*dst = '\0';
////	return* p;
////}
////int main()
////{
////	char a[10] = "hello ";
////	char b[10] = "world";
////	char ret = my_strncat(a, b, 3);
////	printf("%s\n", a);
////	system("pause");
////	return 0;
////}
////
////
////模拟实现strncpy
////#include <stdio.h>
////#include <stdlib.h>
////#include <assert.h>
////char my_strncpy(char* dst, const char* src, size_t n)
////{
////	assert(dst && src);
////	char* p = dst;
////	while (n--)
////	{
////		*dst++ = *src++;
////	}
////	*dst = '\0';
////	return *p;
////}
////
////int main()
////{
////	char a[10] = "hello ";
////	char b[10] = "world";
////	char ret = my_strncpy(a, b, 3);
////	printf("%s\n", a);
////	system("pause");
////	return 0;
////}
////
////
//////模拟实现strncmp
////#include <stdio.h>
////#include <stdlib.h>
////#include <assert.h>
////char my_strncmp(const char* dst, const char* arc, size_t n)
////{
////	assert(dst && arc);
////	while(n-- && *dst)
////	{
////		while (*dst == *arc)
////		{
////			dst++;
////			arc++;
////	     }
////		if (*arc == '\0')
////			return 1;
////		dst++;
////	}
////	return -1;
////}
////int main()
////{
////	char a[10] = "hello ";
////	char b[10] = "heo";
////	int ret = my_strncmp(a, b, 3);
////	if (ret == 1)
////	{
////		printf("相同！\n");
////	}
////	else
////		printf("不同！\n");
////	system("pause");
////	return 0;
////}
//
//#pragma warning(disable:4996)
//#include<stdio.h>
//#include <dos.h>
//#include <process.h>
//#include<stdlib.h>
//#include<conio.h>
//#include<iostream>
//
//#define TRUE 1
//#define FALSE 0
//#define INVALID -1
//#define NULL 0
//#define total_instruction 320     /*  指令流长  */
//#define total_vp 32             /*  虚页长 */
//#define clear_period 50          /*  清零周期  */
//typedef struct                  /*  页面结构  */
//{
//	int pn, pfn, counter, time;
//}p1_type;
//p1_type p1[total_vp];           /*  页面结构数组  */
//
//struct pfc_struct                /*  页面控制结构  */
//{
//	int pn, pfn;
//	struct pfc_struct *next;
//};
//typedef struct pfc_struct pfc_type;
//
//pfc_type pfc[total_vp], *freepf_head, *busypf_head, *busypf_tail;
//int diseffect = 0, a[total_instruction];
//int page[total_instruction], offset[total_instruction];
//void initialize(int);
//void FIFO(int);
//void LRU(int);
//void OPT(int);
//void LFU(int);
//void NUR(int);
//
//int main()
//{
//	int S, i;
//	srand(getpid() * 10);
//	/* 由于每次运行时进程号不同,故可用来作为初始化随机数队列的”种子”  */
//	S = (float)319 * rand() / 32767 + 1;
//	for (i = 0; i < total_instruction; i += 4)      /*产生指令队列 */
//	{
//		a[i] = S;                        /* 任选一指令访问点 */
//		a[i + 1] = a[i] + 1;                  /* 顺序执行一条指令 */
//		a[i + 2] = (float)a[i] * rand() / 32767;   /* 执行前地址指令  */
//		a[i + 3] = a[i + 2] + 1;                /* 执行后地址指令  */
//		S = (float)rand()*(318 - a[i + 2]) / 32767 + a[i + 2] + 2;
//	}
//	for (i = 0; i < total_instruction; i++)      /* 将指令序列变换成页地址流*/
//	{
//		page[i] = a[i] / 10;
//		offset[i] = a[i] % 10;
//	}
//	for (i = 4; i <= 32; i++)
//	{
//		printf(" % 2d page frames", i);
//		FIFO(i);
//		LRU(i);
//		//OPT(i);
//		LFU(i);
//		NUR(i);
//		printf("\n");
//	}
//	system("pause");
//}
//
////int total_pf; /*  用户进程的内存页面数  */   
//void FIFO(int total_pf)
//{
//	int i;
//	pfc_type *p;
//	initialize(total_pf);
//	busypf_head = busypf_tail = NULL;
//	for (i = 0; i < total_instruction; i++)
//	{
//
//		if (p1[page[i]].pfn == INVALID)
//		{
//			diseffect += 1;
//			if (freepf_head == NULL)
//			{
//				p = busypf_head->next;
//				p1[busypf_head->pn].pfn = INVALID;
//				freepf_head = busypf_head;
//				freepf_head->next = NULL;
//				busypf_head = p;
//			}
//			p = freepf_head->next;
//			freepf_head->next = NULL;
//			freepf_head->pn = page[i];
//			p1[page[i]].pfn = freepf_head->pfn;
//			if (busypf_tail == NULL)
//				busypf_head = busypf_tail = freepf_head;
//			else
//			{
//				busypf_tail->next = freepf_head;
//				busypf_tail = freepf_head;
//			}
//			freepf_head = p;
//		}
//	}
//	printf("FIFO:%6.4f", 1 - (float)diseffect / 320);
//}
//
////int total_pf;
//void LRU(int total_pf)
//{
//	int min, minj, i, j, present_time;
//	initialize(total_pf);
//	present_time = 0;
//	for (i = 0; i < total_instruction; i++)
//	{
//		if (p1[page[i]].pfn == INVALID)
//		{
//			diseffect++;
//			if (freepf_head == NULL)
//			{
//				min = 32767;
//				for (j = 0; j < total_vp; j++)
//					if (min > p1[j].time&&p1[j].pfn != INVALID)
//					{
//						min = p1[j].time; minj = j;
//					}
//				freepf_head = &pfc[p1[minj].pfn];
//				p1[minj].pfn = INVALID;
//				p1[min].time = -1;
//				freepf_head->next = NULL;
//			}
//			p1[page[i]].pfn = freepf_head->pfn;
//			p1[page[i]].time = present_time;
//			freepf_head = freepf_head->next;
//		}
//		else
//			p1[page[i]].time = present_time;
//		present_time++;
//	}
//	printf("LRU:%6.4f", 1 - (float)diseffect / 320);
//}
//
////int total_pf;
//void NUR(int total_pf)
//{
//	int i, j, dp, cont_flag, old_dp;
//	//pfc_type  *t;
//	initialize(total_pf);
//	dp = 0;
//	for (i = 0; i < total_instruction; i++)
//	{
//		if (p1[page[i]].pfn == INVALID)             /* 页面失效 */
//		{
//			diseffect++;
//			if (freepf_head == NULL)               /* 无空闲页面 */
//			{
//				cont_flag = TRUE;
//				old_dp = dp;
//				while (cont_flag)
//					if (p1[dp].counter == 0 && p1[dp].pfn != INVALID)
//						cont_flag = FALSE;
//					else
//					{
//						dp++;
//						if (dp == total_vp)
//							dp = 0;
//						if (dp == old_dp)
//							for (j = 0; j < total_vp; j++)
//								p1[j].counter = 0;
//					}
//				freepf_head = &pfc[p1[dp].pfn];
//				p1[dp].pfn = INVALID;
//				freepf_head->next = NULL;
//			}
//			p1[page[i]].pfn = freepf_head->pfn;
//			freepf_head = freepf_head->next;
//		}
//		else
//			p1[page[i]].counter = 1;
//		if (i%clear_period == 0)
//			for (j = 0; j < total_vp; j++)
//				p1[j].counter = 0;
//	}
//	printf("NUR:%6.4f", 1 - (float)diseffect / 320);
//}
//
//
////void OPT(int total_pf)
////{
////	int i, j, max, maxpage, d, dist[total_vp + 1];
////	pfc_type  *t;
////	initialize(total_pf);
////	for (i = 0; i < total_instruction; i++)
////	{
////		if (p1[page[i]].pfn == INVALID)
////		{
////			diseffect++;
////			if (freepf_head == NULL)
////			{
////				for (j = 0; j < total_vp; j++)
////				{
////					if (p1[j].pfn != INVALID)
////						dist[j] = 32767;
////					else
////						dist[j] = 0;
////				}
////				d = 1;
////				for (j = i + 1; j < total_instruction; j++)
////				{
////					if (p1[page[j]].pfn != INVALID)
////						dist[page[j]] = d;
////					else
////						d++;
////				}
////				max = -1;
////				for (j = 0; j < total_vp; j++)
////				{
////					if (max < dist[j])
////					{
////						max = dist[j];
////						maxpage = j;
////					}
////				}
////				freepf_head = &pfc[p1[maxpage].pfn];
////				freepf_head->next = NULL;
////				p1[maxpage].pfn = INVALID;
////			}
////			p1[page[i]].pfn = freepf_head->pfn;
////			freepf_head = freepf_head->next;
////		}
////	}
////	printf("OPT:%6.4f", 1 - (float)diseffect / 320);
////}
//
//void OPT(int total_pf)       /*最佳置换算法*/
//{
//	int i, j, max, maxpage, d, dist[total_vp];
//
//	pfc_type* t;
//
//	initialize(total_pf);
//
//	for (i = 0; i < total_instruction; i++)
//	{
//		if (p1[page[i]].pfn == INVALID)      /*页面失效*/
//		{
//			diseffect++;
//
//			if (freepf_head == NULL)         /*无空闲页面*/
//			{
//
//				for (j = 0; j < total_vp; j++)
//				{
//					if (p1[j].pfn != INVALID)
//						dist[j] = 32767;
//					else
//						dist[j] = 0;
//				}
//				for (j = 0; j < total_vp; j++)
//				{
//					if ((p1[j].pfn != INVALID) && (dist[j] == 32767))
//					{
//						dist[j] = j;
//					}
//				}
//				max = 0;
//				for (j = 0; j < total_vp; j++)
//					if (max < dist[j])
//					{
//						max = dist[j];
//						maxpage = j;
//					}
//
//				freepf_head = &pfc[p1[maxpage].pfn];
//				freepf_head->next = NULL;
//				p1[maxpage].pfn = INVALID;
//
//			}
//
//			p1[page[i]].pfn = freepf_head->pfn;
//
//			freepf_head = freepf_head->next;
//
//		}
//	}
//	printf("OPT:%6.4f\t", 1 - (float)diseffect / 320);
//
//}
//
//
//
////int total_pf;
//void LFU(int total_pf)
//{
//	int i, j, min, minpage = 0;
//	//pfc_type  *t;
//	initialize(total_pf);
//	for (i = 0; i < total_instruction; i++)
//	{
//		if (p1[page[i]].pfn == INVALID)
//		{
//			diseffect++;
//			if (freepf_head == NULL)
//			{
//				min = 32767;
//				for (j = 0; j < total_vp; j++)
//				{
//					if (min > p1[i].counter&&p1[j].pfn != INVALID)
//					{
//						min = p1[j].counter;
//						minpage = j;
//					}
//					p1[j].counter = 0;
//				}
//				freepf_head = &pfc[p1[minpage].pfn];
//				p1[minpage].pfn = INVALID;
//				freepf_head->next = NULL;
//			}
//			p1[page[i]].pfn = freepf_head->pfn;
//			freepf_head = freepf_head->next;
//		}
//		else
//			p1[page[i]].counter++;
//	}
//	printf("LFU:%6.4f", 1 - (float)diseffect / 320);
//}
//
////int total_pf; /* 用户进程的内存页面数 */
//void initialize(int total_pf)                       /* 初始化相关数据结构 */
//{
//	int i;
//	diseffect = 0;
//	for (i = 0; i < total_vp; i++)
//	{
//		p1[i].pn = i; p1[i].pfn = INVALID;  /* 置页面控制结构中的页号,页面为空 */
//		p1[i].counter = 0; p1[i].time = -1; /*页面控制结构中的访问次数为0,时间为-1*/
//	}
//	for (i = 1; i < total_pf; i++)
//	{
//		pfc[i - 1].next = &pfc[i];
//		pfc[i - 1].pfn = i - 1; /*建立pfc[i-1]和pfc[i]之间的链接*/
//	}
//	pfc[total_pf - 1].next = NULL;
//	pfc[total_pf - 1].pfn = total_pf - 1;
//	freepf_head = &pfc[0];                 /* 空页面队列的头指针为pfc[0] */
//}

//实现strcpy
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//char* my_strcpy( char* dst, char* src)
//{
//	    assert(dst && src);
//		char* ret = dst;
//		while (*src)
//		{
//           *dst++ = *src++;
//	    }
//		*dst = '\0';
//		return ret;
//}
//int main()
//{
//	char a1[] = "Hello";
//	char a2[] = "World";
//	char* ret=my_strcpy(a1, a2);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}

//1.实现strcpy
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//char* my_strcpy( char *dst, const char* src)
//{
//	assert(dst&&src);
//	char *p1 = dst;
//	while (*src && *dst)
//	{
//		*dst++ = *src++;
//	}
//	*dst = '\0';
//	return  p1;
//}
//int main()
//{
//	char a[100] = "hello";
//	char b[100]= "world";
//	char *ret=my_strcpy(a, b);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
//}
//2、实现strcat
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//char* my_strcat(char *dest, const char *src)
//{
//	assert(dest && src);
//	char *p1 = dest;
//	while(*dest)
//	{
//		dest++;
//	}
//	while (*src)
//	{
//		*dest++ = *src++;
//	}
//	return p1;
//}
//int main()
//{
//	char a[100] = "hello";
//	char b[100]= "world";
//	char *ret=my_strcat(a, b);
//	printf("%s\n", ret);
//	system("pause");
//	return 0;
// }

//3、实现strstr
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//#define NULL
char* my_strstr(char *dest,  char *src)
{
	assert(dest && src);
	while (*dest)
	{
		char *p1 = dest;
		char *p2 = src;
		while (*dest == *src)
		{
			dest++;
			src++;
		}
		if (*src == '\0')
			return p1;
		dest++;
	}
	return NULL;
}

int main()
{
	char a[100] = "hello";
	char b[100]= "hell";
	char *ret=my_strstr(a, b);
	if(ret!=NULL)
		//printf("Not find!\n");
	printf("Find\n");
	system("pause");
	return 0;
 }
