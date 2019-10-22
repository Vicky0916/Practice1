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
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
////#define NULL
//char* my_strstr(char *dest,  char *src)
//{
//	assert(dest && src);
//	while (*dest)
//	{
//		char *p1 = dest;
//		char *p2 = src;
//		while (*dest == *src)
//		{
//			dest++;
//			src++;
//		}
//		if (*src == '\0')
//			return p1;
//		dest++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char a[100] = "hello";
//	char b[100]= "hell";
//	char *ret=my_strstr(a, b);
//	if(ret!=NULL)	
//	printf("Find\n");
//	else
//	printf("Not find!\n");
//	system("pause");
//	return 0;
// }

//4、实现strcmp
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//int my_strcmp(char *dest, const char *src)
//{
//	int ret = 0;
//	assert(dest&&src);
//	while (!(ret = *(unsigned char*)src) - *(unsigned char*)dest && *dest)
//	++src;
//	++dest;
//	if (ret < 0)
//		ret = -1;
//	else if (ret > 0)
//		ret = 1;
//	return ret;
//}

//5、实现memcpy
//void *memcpy(void *dest, const void *src, size_t count)
//{
//	char *d;
//	const char *s;
//	if (dest > (src + size)) || (dest < src)
//	{
//		d = dest;
//		s = src;
//		while (count--)
//			*d++ = *s++;
//	}
//	else
//	{
//		d = (char*)(dest + count - 1);
//		s = (char*)(src + count - 1);
//		while (count--)
//			*d-- = *s--;
//	}
//	return dest;
// }

//1、左旋k位
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//void left_shift(char *str, int len, int stept)
//{
//	assert(str);
//	char tmp=0;
//	while (stept--)
//	{
//		tmp = str[0];
//		for (int i = 0; i < len; i++)
//		{
//			str[i] = str[i + 1];
//		}
//		str[len - 1] = tmp;
//	}
//}
//int main()
//{
//	char str[1000]="ABCDE";
//	int k; //char ret;
//	scanf("%d", &k);
//	left_shift(str, 5, 2);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}
//

//// 顺序表的动态存储 
//#include <stdio.h>
//#include <assert.h>
//#include <stdlib.h>
//#define LIST_INTSIZE 50
//typedef  int SLDataType;
//typedef struct SeqList
//{
//	SLDataType* array; // 指向动态开辟的数组 
//	size_t size; // 有效数据个数 
//	size_t capicity; // 容量空间的大小 
//}SeqList;
//int SeqListInit(SeqList* psl, size_t capacity); 
//int SeqListIsfull(SeqList* psl);
//int SeqListEmpty(SeqList* psl);
//int SeqListDestory(SeqList* psl);
//void CheckCapacity(SeqList* psl);
//void SeqListPushBack(SeqList* psl, SLDataType x);
//void SeqListPopBack(SeqList* psl);
//void SeqListPushFront(SeqList* psl, SLDataType x);
//void SeqListPopFront(SeqList* psl);
//
//// 基本增删查改接口 
//int SeqListInit(SeqList* psl, size_t capacity)
//{
//	assert(psl);
//	psl->array = (SLDataType*)malloc(LIST_INTSIZE+1)*(sizeof(SLDataType));
//	if (psl->array == NULL)
//		return 0;
//	psl->capicity == 0;
//	psl->size == LIST_INTSIZE;
//	return 1;
//}
//
//int  SeqListIsfull(SeqList* psl)
//{
//	return psl->size >= psl->capicity);
//}
//
//int SeqListEmpty(SeqList* psl)
//{
// return psl->capicity == psl->size == 0;
//}
//int SeqListDestory(SeqList* psl)
//{
//	assert(psl);
//	if (psl->array == NULL)
//	{
//		return 0;
//	}
//	free(psl->array);
//	psl->array == NULL;
//	psl->size = 0;
//	psl->capicity = 0;
//}
//void CheckCapacity(SeqList* psl)
//{
//	assert(psl);
//	if(psl->capicity >=psl-> size)
//	return;
//
//}
//void SeqListPushBack(SeqList* psl, SLDataType x)//尾插
//{
//	assert(psl);
//	size_t end = psl->size-1;
//	psl->array[end] = x;
//	psl->size++;
//}
//void SeqListPopBack(SeqList* psl)  //尾删
//{
//	assert(psl);
//	if (SeqListEmpty(psl))
//	{
//		return ;
//	}
//	size_t end = psl->size - 1;
//	//free(psl->array[end]);
//	psl->array[end] == NULL;
//	psl->size--;
//}
//void SeqListPushFront(SeqList* psl, SLDataType x)//头插
//{
//	assert(psl);
//	size_t end = psl->size - 1;
//	while (end > 0)
//	{
//		psl->array[end] = psl->array[end - 1];
//		--end;
//	}
//	psl->array[0] = x;
//	psl->size++;
//}
//void SeqListPopFront(SeqList* psl) //头删
//{
//	assert(psl);
//	if (SeqListEmpty(psl))
//	{
//		return ;
//	}
//	size_t end = psl->size - 1;
//	while (end > 0)
//	{
//		psl->array[end-1] = psl->array[end];
//		--end;
//	}
//	psl->size--;
//}
//int SeqListFind(SeqList* psl, SLDataType x)//查找元素
//{
//	assert(psl);
//	int i = 0;
//	if (SeqListEmpty(psl))
//	{
//		return 0;
//	}
//	for (i = 0; i < psl->size; i++)
//	{
//		if (x == psl->array[i])
//			return i;
//	}
//	return NULL;
//}
//void SeqListInsert(SeqList* psl, size_t pos, SLDataType x)  //按位置插入
//{
//	assert(psl);
//	int i = 0;
//	if (SeqListEmpty(psl))
//	{
//		return ;
//	}
//	for (i = psl->size; i > pos; i--)
//	{
//		psl->array[i] = psl->array[i-1];	
//	}
//	psl->array[i] = x;
//	psl->size++;
//}
//void SeqListErase(SeqList* psl, size_t pos)//按位置删除
//{
//	assert(psl);
//	int i = 0;
//	if (SeqListEmpty(psl))
//	{
//		return ;
//	}
//	if (pos<0||pos > psl->array[psl->size])
//	{
//		return;
//	}
//	for (i = 0; i < psl->size; i++)
//	{
//		if (i == pos - 1)
//		{
//			psl->array[i] = psl->array[i + 1];
//		}
//	}
//	psl->size--;
//}
//
//void SeqListModify(SeqList* psl, size_t pos, SLDataType x)  //修改某位置的值
//{
//	assert(psl);
//	int i = 0;
//	if (SeqListEmpty(psl))
//	{
//		return;
//	}
//	else if (pos<0 || pos > psl->array[psl->size])
//	{
//		return;
//	}
//	else 
//	{
//		for (i = 0; i < psl->size; i++)
//		{
//			if (i == pos - 1)
//			{
//				psl->array[i] = x;
//			}
//		}
//	}
//}
//void SeqListPrint(SeqList* psl)
//{
//	assert(psl);
//	int i = 0;
//	for (i = 0; i < psl->size; i++)
//	{
//		printf("%d", psl->array[i]);
//	}
//	printf("\n");
//	return 0;
//}
//

//向下调整
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//typedef int STDatatype;
//typedef struct  Heap
//{
//	STDatatype *a;
//	int size;
//	int capacity;
//};
//void Swap(size_t a, size_t b)
//{
//	size_t temp;
//	a = b;
//	b = temp;
//	temp = a;
//}
//void Ajustdown(STDatatype *a, size_t n, size_t parent)
//{
//	int child = parent * 2 + 1;
//	while (child < n)
//	{
//		//找到父亲下面较小的孩子
//		if (child + 1 < n&&a[child + 1] < a[child])
//		{
//			++child;   //说明右孩子小
//		}
//		//如果父亲比孩子小，则应该进行交换
//		if (a[parent] > a[child])
//		{
//			Swap(a[child], a[parent]);
//			parent = child;
//			child = 2 * parent + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//


////单链表的基本操作
//#include <stdio.h>
//#include <stdlib.h>
//#include <malloc.h>
//#include <assert.h>
////#define NULL 0;
//typedef int SLDatatype;
//typedef struct  LinkListNode
//{
//	SLDatatype data;  //数据域
//	 struct LinkListNode *next;//指针域
//	 //LinkListNode *head;
//}LinkListNode;
//
//typedef struct SList
//{
//	LinkListNode *head;
//}SList;
//
//void LinkListInit(SList* plt);
//LinkListNode LinkListCreate();
//void TailEnLinkList(SList *plt, SLDatatype value);
//void LinkListNodePrint(SList *plt);
////void InsertlistByhead(SList *plt, SLDatatype x);
////void PopBack(SList *plt);
////void Popfront(SList *plt);
////LinkListNode *LinkListNodeFind(SList *plt, SLDatatype x);
//
//
//void LinkListInit(SList* plt)
//{
//	plt->head = NULL;
//}
///*
//LinkListNode LinkListCreate()
//{
//	LinkListNode *headnode = (LinkListNode*)malloc(sizeof(LinkListNode));//开辟内存
//	LinkListNode *tailnode = headnode;
//	tailnode->next = NULL;
//	int i=0, len=0, value=0;
//	printf("请输入节点的个数：\n" );
//	scanf_s("%d ", &len);
//	for (i = 0; i < len; i++)
//	{
//		printf("第%d个节点是：\n", i + 1);
//		scanf_s("%d\n",&value);
//		LinkListNode *newnode = (LinkListNode*)malloc(sizeof(LinkListNode));//开辟内存
//		newnode->data = value;
//		tailnode->next = newnode;
//	    newnode->next = NULL;
//		tailnode = newnode;
//	}
//	return *headnode;
//}*/
//
////遍历链表
//void traverse(LinkListNode* head)
//{
//	LinkListNode* p = head->next;
//	while (p)
//	{
//		printf("%d ", p->data);
//		p = p->next;
//	}
//	printf("\n");
//	return;
//}
//
////尾插法建立链表
//void TailEnLinkList(SList *plt, SLDatatype value)
//{
//	assert(plt);
////	LinkListNode *cur = plt->head; 
//	LinkListNode* newnode=(LinkListNode*)malloc(sizeof(LinkListNode));
//	newnode->data = value;
//	newnode->next = NULL;
//	if (plt->head == NULL)
//	{
//		plt->head = newnode;
//	}
//	else
//	{
//		LinkListNode *cur = plt->head;
//		while (cur->next)
//		{
//			cur = cur->next;
//		}
//		cur->next = newnode;
//		newnode->next = NULL;
//	}
//}
//
////头插法建立单链表
//void InsertlistByhead(SList *plt,SLDatatype x)
//{
//	assert(plt);
//	LinkListNode *cur;
//	cur = (LinkListNode*)malloc(sizeof(LinkListNode));
//	cur->data = x;
//	cur->next = NULL;
//	cur->next = plt->head;
//	plt->head = cur; 
//}
//
//
//void PopBack(SList *plt)  //尾删
//{
//	assert(plt);
//
//	LinkListNode *cur = plt->head;
//	//cur=(LinkListNode*)malloc(sizeof(LinkListNode));
//	if (plt->head == NULL)  //没有节点
//	{
//		return;
//	}
//	else if (cur->next == NULL)//只有一个节点
//	{
//		free(cur);
//		plt->head = NULL;
//	}
//	else    // 
//	{
//		while (cur->next->next != NULL)
//		{
//			cur = cur->next;
//		}
//		free(cur->next);
//		cur->next = NULL;
//	}
//}
//
//void Popfront(SList *plt)
//{
//	assert(plt);
//	LinkListNode *cur = plt->head;
//	if (cur == NULL)
//	{
//		return;
//	}
//	else
//	{
//		plt->head = cur->next;
//		free(cur);
//		cur = NULL;
//	} 
//}
//
//LinkListNode *LinkListNodeFind(SList *plt, SLDatatype x)
//{
//	LinkListNode *cur = plt->head;
//	/*if (cur == NULL)
//	{
//		return;
//	}*/
//	while(cur) 
//	{
//		if (cur->data == x)
//		{
//			return  cur;
//		}
//		cur = cur->next;
//	}
//	return NULL;	
//}
//
//void InsertAfter(SList*plt, LinkListNode* pos, SLDatatype x)//将x插入到任意位置
//{
//	LinkListNode* cur = plt->head;
//	cur= (LinkListNode*)malloc(sizeof(LinkListNode));
//	cur->data = x;
//	cur->next = NULL;
//	cur->next = pos->next;
//	pos->next = cur;
//}
//
//void ErasePos(LinkListNode *pos,SList *plt)//删除pos节点
//{
//	assert(pos);
//	// LinkListNode *Next = pos->next;
//	if (pos == NULL)
//	{
//		return;
//	}
//	else if (pos->next == NULL) //只有一个节点
//	{
//		free(pos); 
//	}
//	else
//	{
//		LinkListNode *pcur = plt->head;
//		while (pcur->next != pos)
//		{
//			pcur = pcur->next;
//		}
//		pcur->next = pos->next;
//		free(pos);
//	} 
//}
//
//
////打印链表
//void LinkListNodePrint(SList *plt)
//{
//	assert(plt);
//	LinkListNode *cur = plt->head;
//	while (cur!=NULL)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	SList lt;
//	LinkListInit(&lt);
//   // LinkListCreate();
//	//LinkListNodePrint(&lt);
//     TailEnLinkList(&lt, 5);
//     TailEnLinkList(&lt, 4);
//     TailEnLinkList(&lt, 3);
//	 InsertlistByhead(&lt,9);
//	 InsertlistByhead(&lt, 2);
//	 LinkListNodePrint(&lt);
//	 PopBack(&lt);
//	 LinkListNodePrint(&lt);
//	 Popfront(&lt);
//	 LinkListNodePrint(&lt);
//	 /*LinkListNodeFind(&lt,3);
//     LinkListNodePrint(&lt);*/
//	system("pause");
//	return 0;
//}

//单链表面试题
//1、删除指定位置的节点
void deleteNode(struct ListNode* node)
{
	node->val = node->next->val;
	node->next = node->next->next;
}
//2、反转一个单链表
struct ListNode* reverseList(struct ListNode* head)
{
	ListNode *p1 = head;
	ListNode *p2 = p1->next;
	ListNode *p3 = p2->next;
	if (head == NULL)
		return NULL;
	if (p1->next == NULL)
		return p1;
	while (p2 != NULL)
	{
		p1 = p2->next;
		p1 = p2;
		p2 = p3;
	}
	head = p1;
	return head;
}
//3、输入一个链表，输出倒数第k个节点
//快慢指针
LinkListNode *FindToTail(LinkList*head, unsigned int k)
{
	LinkListNode *fast = phead;
	LinkList *slow = phead;
	while (k--)
	{  //如果没走到k步，但是fast已经为空，则返回空
		if (fast == NULL)
		{
			return NULL;
		}
		fast = fast->next;
	}
	while (fast != NULL)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return slow;
}

//4、合并两个有序链表
//输入1-》2-》3     1-》3-》4
//输出1-》1-》2-》3-》3-》4
struct ListNode *MergeTwoLists(struct ListNode*l1, struct ListNode *l2)
{
	if (l1 == NULL)
		return l2;
	if (l2 == NULL)
		return l1;	
	  ListNode *l == NULL;
	  //找头
	  if (l1->val < l2->val)
	  {
		  l = l1;
		  l1 = l1->next;
	  }
	  else
	  {
		  l = l2;
		  l2 = l2->next;
	  }
	  ListNode *tail = 1;
	  while (l1 != NULL && l2 != NULL)
	  {
		  if (l1->val < l2->val)
		  {
			  tail->next = l1;
			  tail = l1;
			  l1->next = l1;
			  
		  }
		  else
		  {
			  tail->next = l2;
			  tail = l2;
			  l2 = l2->next;
		  }
	  }
	  if (l1 != NULL)   //l1没有结束
		  tail->next = l1;
	  if (l2 != NULL)   
		  tail->next = l2;
	  return tail;
	}
	
//5、分割链表，链表中比指定数小的在他的前面，比它大的在它后面
//greter 和less指针
ListNode *Partition(ListNode *head, int x)
{
	ListNode *cur = head;
	if (cur == NULL)
	{
		return NULL;
	}
	ListNode *greter=NULL,*gretertail==NULL;
	ListNode *less=NULL,*lesstail=NULL;
	less = lesstail = (ListNode*)malloc(sizeof(ListNode));
	greter = gretertail = (ListNode*)malloc(sizeof(ListNode));
	while (cur)
	{
		if (cur->data < x)
		{
			lesstail->next = cur;
			lesstail = cur;
			cur = cur->next;
		}
		else
		{
			gretertail->next = cur;
			gretertail = cur;
			cur = cur->next;
		}
		if (gretertail)
			gretertail->next = NULL;
		if (lesstail)
			lesstail->next = greter;
	}
	//greter->next=NULL:
	//lesstail->next = greater->next;//因为带头结点了
	//ListNode *l = less->next;
	//free(less);
	//free(greter);
	//return l;
}

//6、删除链表中重复的元素
ListNode* deleteDuplication(ListNode* pHead)
{
	ListNode *prev = NULL;
	ListNode *cur = pHead;
	ListNode *Next = cur->next;
	while (Next != NULL)
	{
		if (cur->val == Next->val)
		{
			while (cur->val == Next->val)
			{
				Next = Next->next;
			}
			while (cur != Next)
			{
				ListNode *list = cur;
				free(list);
			}
			cur = Next;
			Next = Next->next;
		}
		else
		{
			prev = cur;
			cur = Next;
			Next = Next->next;
		}
	}
	return pHead;
}

//7、判断一个链表中是否有环
//思想：快慢指针
bool CircleList(LinkList *head)
{
	LinkList *slow = head;
	LinkList *fast = head;
	while (fast&&fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return true;
		}
	}
	return false;
}

//8、找出两个链表的第一个公共节点
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
	int count1 = 0, count2 = 0;
	if (headA == NULL || headB == NULL)
		return NULL;
	struct ListNode*cur1 = headA;
	struct ListNode*cur2 = headB;
	struct ListNode*tmp = NULL;
	while (cur1)
	{
		count1++;
		cur1 = cur1->next;
	}
	while (cur2)
	{
		count2++;
		cur2 = cur2->next;
	}
	if (count1 > count2)
	{
		int sub = count1 - count2;
		while (sub--)
		{
			cur1 = cur1->next;
		}
	}
	else
	{
		int sub = count2 - count1;
		while (sub--)
		{
			cur2 = cur2->next;
		}
	}
	while (cur1&&cur2)
	{
		if (cur1 == cur2)
		{
			tmp = cur1;
			break;
		}
		cur1 = cur1->next;
		cur2 = cur2->next;
	}
	return tmp;
}


//1、二叉树的构建   例如ABD##E##C##
BTnode *CreateTree(char *a,*pi)
{
	if (a[*pi] == '#')
		return NULL;
	BTnode* root = (BTnode*)malloc(sizeof(BTnode));
	root->data = a[*pi];
	++(*pi);

	root->left=CreateTree(a, pi);
	++(*pi);
	root->right = CreateTree(a, pi);
}
void Test()
{
	char *a = "ABD##E##C##";
	BTnode* root = NULL;
	int i = 0;
	root = CreateTree(a, pi);
}
//2、销毁掉二叉树
Btnode *DestroyTree()
{
	if (root == NULL)
		return NULL;
	/*if (root->left == NULL && root->right == NULL)
		free(root);*/
	DestroyTree(root->left);
	DestroyTree(root->right);
	    free(root);
		root == NULL;
}

//3、求二叉树中叶子节点的个数
int TreeLeavesSize(BTreeNode *root)
{
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
		return 1;
	return TreeLeavesSize(root->left) + TreeLeavesSize(root->right);
}

//4、第k层结点个数
int TreeLeavesKSize(BTreeNode *root,int k)
{
	if (root == NULL)
		return 0;
	if (root = k)
		return 1;
	return TreeLeavesKSize(root->left, k - 1) + TreeLeavesKSize(root->right, k - 1);
}

//5、二叉树的查找
bool BinaryTree(BTnode *root, char x)
{
	if (root == NULL)
		return false;
	if (root->val == x)
		return true;
	Lret=BinaryTree(root->left, x);
	Rret=BinaryTree(root->right, x);
	if (Lret != NULL)
	{
		return Lret;
	}
	if (Rret != NULL)
	{
		return Rret;
	}
	return NUll;
}

//6、判断一棵树是否为完全二叉树
bool IsCompleteTree(BTnode *root)
{
	if (root == NULL)
		return false;
	Queue q;
	QueueInit(&q);
	QueuePush(&q,root->val);
	while (!QueueEmpty(&q))
	{
		BTnode *front = Queuefront(&q);
		QueuePop(&q);
		if (front != NULL)
		{
			QueuePush(&q, front->left);
			QueuePush(&q, front->right);
		}
		else
		{
			break;
		}
	}
	while (!QueueEmpty(&q))
	{
		BTnode *front = Queuefront(&q);
		QueuePop(&q);
		if (front != NULL)
		{
			return false;
		}
	}
	return ture;
}

//7、二叉树的层次遍历
BTnode* BinaryTree(BTnode *root)
{
	if (root == NULL)
		return NULL;
	Queue q;
	QueueInit(q);
	QueuePush(&q, root->val);
	while (!= QueueEmpty(&q)
	{
		BTnode *front = QueueFront(&q);
		QueuePop(&q);
		printf("%c ", front);
		if (front->left != NULL)
		{
			QueuePush(front->left);
		}
		if (front->right != NULL)
		{
			QueuePush(front->right);
		}
		printf("\n");
	}
}










