#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
void InsertSort(int *a, int n)  //直接插入排序
{   //不断地将新的元素插入到已经排好顺序的数组中
//例如2 5 1 8 6，先将前两个元素排好序，再把1插入进去
	for (int i = 0; i < n-1; i++)
	{
		int end = i;
		int temp = a[end + 1];
		while (a[end])
		{
			if (a[end] > temp)
			{
				a[end + 1] = a[end];
				--end;
			}
			else
				break;
		}
		a[end + 1]=temp;
	}
}

void Swap(int *a, int *b)
{
  	int x = *a;
	*a = *b;
	*b = x;
}

void SelectSort(int *a, int n)//选择排序
//在一个区间里面直接选出最大值和最小值，最小值放到第一个，最大值放到最后一个
//然后不断的缩小区间
{
	int begin = 0, end = n-1;
	int i = 0;
	while(begin<=end)
    { 
		int minIndex = begin;
		int maxIndex = begin;
		for (i = begin+1; i <= end; ++i)
		{
			if (a[i] < a[minIndex])
				minIndex = i;
			if (a[i] > a[maxIndex])
				maxIndex = i;
		}
		Swap(&a[begin], &a[minIndex]);
		if(maxIndex==begin)
		{
			maxIndex = minIndex;
		}
	    Swap(&a[end], &a[maxIndex]);
		++begin; --end;
	}
}

void BubleSort(int *a, int n)   //冒泡排序
{
	int i = 0;
	for (i = 0; i < n-1; i++)
	{
		   for(int j = 0; j < n - i - 1;j++)
			{
			   if (a[j] > a[j+1])
				Swap(&a[j], &a[j+1]);
			}
	}
}
void ShellSort(int *a, int n)//希尔排序  
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i <= n - gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[i + gap] = a[end];
					end -= gap;
				}
				else
					break;
			}
			a[end + gap] = tmp;
		}
	}
}

void AjustDown(int *a, int n,int root) //堆排序
{
	int  parent = root; 
	int child = parent * 2 + 1;
	while (child < n )
	{
		if (child + 1 < n && a[child] > a[child + 1])
		{
			++child;
		}
		if (a[parent] > a[child])
		{
			Swap(&a[parent], &a[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
void HeapSort(int *a, int n)
{
	//n-1-1为叶子节点的父结点的下标
	for (int i = (n -1-1) / 2; i >= 0; --i)
	{//建堆的过程，首先从最后一个叶子节点的父节点开始，向下调整
		AjustDown(a, n, i);
	}
	int end = n - 1;
	while (end > 0)
	{//将大堆最后一个叶子结点与堆顶的数据进行交换，再把这个数排除在外，向下调整剩余的数
		Swap(&a[0], &a[end]);
		AjustDown(a, end, 0);
		--end;
	}
}

int PartQuickSort(int *a,int left,int right)
//基本思想 ：先定义最后一个数为key,从左边起找比key大的
//从右边起找比key小的，然后交换二者的位置
{
	int key = a[right]; 
	int keyIndex=right;
	while (left < right)
	{
		while (left < right&&a[left] <= key)
			++left;
		while (left < right&&a[right] >= key)
			--right;
		if (left < right)
		{
		Swap(&a[left],&a[right]);
        ++left;
		--right;
		}
		
	}
//如果找到left和right相等，那么此时的元素就是一个分割点
	Swap(&a[left], &a[keyIndex]);
		return left;
 }
void QuickSort(int *a, int left, int right)
{
	if (left > right)
		return;
	int keyIndex = PartQuickSort(a, left, right);
	QuickSort(a, left, keyIndex - 1); 
	QuickSort(a, keyIndex + 1, right);
}

// 挖坑法的快速排序
 //基本思想：先将最后一个数定义为key,用tmp保存下来，即为最后一个是坑，再将left向后找比key大的，right向前找比key小的
//找到后用left的值填补坑，left变为新的坑，right 也是如此
//当left和right相等的时候，再将tmp的值赋给a[left]
int PartQuickSort2(int *a, int left, int right)
{
	int key = a[right];
	while (left < right)
	{
		while (left < right && a[left] <= key)
		{
			++left;
		}
		a[right] = a[left];
		while (left < right&&a[right] >= key)
		{
			--right;
		}
		a[left] = a[right];
	}
	a[left] = key;
	return left;
}

void QuickSortWK(int *a, int left, int right)   //挖坑法的快速排序
{
	if (left > right)
		return;
	int key=PartQuickSort2(a, left, right);
	QuickSortWK(a, 0, key - 1);
	QuickSortWK(a, key + 1, right);
}

void _MergeSort(int *a, int left, int right,int *tmp)  //归并排序
//基本思想，先将一组数不断地取中划分，到只有一个元素的时候再return,然后进行归并排序
//不断地return
//以下为划分的部分
{
	if (left == right)
		return;
	int	 mid = left + (right - left) / 2;
	_MergeSort(a, left, mid,tmp);
	_MergeSort(a, mid + 1, right,tmp);
	//Merge(两段区间)
	int begin1 = left, end1 = mid;
	int begin2 = mid + 1, end2 = right;
	int i = left;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
		{
			tmp[i++] = a[begin1];
			++begin1;
		}
		else
		{
			tmp[i++] = a[begin2];
			++begin2;
		}
	}  
	while (begin1 <= end1)
	{
		tmp[i++] = a[begin1];
		++begin1;
	}
	memcpy(a + left, tmp + left, sizeof(int)*(i-left));
}
void MergeSort(int *a, int n)
{
	//开辟一个空的数组，用于存放返回的数，返回的数放入tmp中进行归并排序
	//再将排好序的数拷贝到原数组中
	int *tmp = (int *)malloc(sizeof(int)*n);
	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
}

//快速排序的第三种方法
//基本思想：定义一个prev和cur,prev先开始于cur相差一步，cur只找比key小的数
//如果满足prev+1!=cur,那么就交换两个数，直到cur等于key,再把prev++,和cur进行交换
int PartSort3(int *a, int left, int right)
{
	int key = a[right];
	int prev = left - 1;
	int cur = left;
	while (cur < right)
	{
		if (a[cur] < key && ++prev != cur)
		{
			Swap(&a[cur], &a[prev]);
		}
		++cur;
	}
	++prev;
	Swap(&a[prev], &a[right]);
	return prev;
}

void QuickSort3(int *a, int left, int right)
{
	if (left > right)
		return;
	int key = PartSort3(a, left, right);
	QuickSort3(a, 0, key-1);
	QuickSort3(a, key + 1, right);
}

//非比较排序
//基本思想：先在一串数中找出最大值和最小值，计算最大值和最小值的数差，目的是求出他们之间的数
//再计算每个数出现的次数,根据每个数的下标求出数的顺序
void CountSort(int *a, int n)
{
	int max = a[0], min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	int range = max - min+1;
	int *newcounta = (int*)malloc(sizeof(int)*(max-min));//存的都是每个数的个数
	memset(newcounta, 0, sizeof(int)*range);  //初始化数组都为0
	for (int i = 0; i < n; i++)
	{
		newcounta[a[i] - min]++;
	}
	int j = 0;
	for (int i = 0; i < range; ++i)
	{
		while (newcounta[i]--)
		{
			a[j++] = i + min;
		}
	}
}
//还差一个非递归的归并排序

void Print(int *a, int n)   //打印出数组
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
int main()
{
	int a[] = { 2,5,1,8,6,9,3,4,7};
	int size = sizeof(a) / sizeof(a[0]);
	printf("原来的数组是：\n");
	Print(a, size);
	printf("\n");
	/*InsertSort(a, size);
	printf("直接插入排序的结果是：\n");
	Print(a, size);
	printf("\n");
	printf("选择排序的结果是：\n");
	SelectSort(a, size);
	Print(a, size);
	printf("\n");
	printf("冒泡排序的结果是：\n");
	BubleSort(a, size);
	Print(a, size);
	printf("\n");
    printf("希尔排序的结果是：\n");
	ShellSort(a, size);
	Print(a, size); 
	printf("\n");
	printf("堆排序的结果是：\n");
	HeapSort(a, size);
	Print(a, size);
	printf("\n");*/
	/*printf("快速排序的结果是：\n");
	QuickSort(a, 0, size-1);
	Print(a, size);
	printf("\n");
	printf("挖坑法的快速排序结果是：\n");
	QuickSortWK(a, 0, size-1);
	Print(a, size);
	printf("\n");
	printf("第三种快速排序的结果是：\n");
	QuickSort3(a, 0, size - 1);
	Print(a, size);*/
	//printf("\n");
	printf("计数排序的结果是：\n");
	CountSort(a, size);
	Print(a, size);
	printf("\n");
	system("pause");
	return 0;
   }
