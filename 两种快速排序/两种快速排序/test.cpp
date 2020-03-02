#include <iostream>
#include <stdlib.h>
#include <stack>
#include <assert.h>
using namespace std;

void QuickSort1(int *a,int left, int right)
{
	if (left < right)
	{
		int low = left;
		int high = right;
		int temp = a[low];
		while (low != high)
		{
			while (low < high&&a[high] >= temp)
				high--;
			if (a[high] < temp)
			{
				int ret = a[high];
				a[high] = a[low];
				a[low] = ret;
			}
			while (low < high&&a[low] <= temp)
				low++;
			if (a[low] > temp)
			{
				int ret = a[high];
				a[high] = a[low];
				a[low] = ret;
			}
		}
		a[low] = temp;
		QuickSort1(a, left, low - 1);
		QuickSort1(a, low + 1, right);
	}
}

//int partition(int *a, int left, int right)
//{
//	int par = 0;
//	if (left < right)
//	{
//		int low = left;
//		int high = right;
//		int temp = a[left];
//		while (low < high)
//		{
//			while (low < high&&a[low] <= temp)
//				low++;
//			if (a[low] > temp)
//			{
//				int ret = a[low];
//				a[low] = a[high];
//				a[high] = ret;
//			}
//			while (low < high&&a[high] >= temp)
//				high--;
//			if (a[high] < temp)
//			{
//				int ret = a[low];
//				a[low] = a[high];
//				a[high] = ret;
//			}
//		}
//		a[low] = temp;
//		par = low;
//	}
//		return par;
//}
int partition(int* a, int left, int right)
{
	double x = a[right];
	int i = left - 1, j = right;
	for (;;)
	{
		while (a[++i] < x) {}
		while (a[--j] > x) { if (j == left) break; }
		if (i < j)
			swap(a[i], a[j]);
		else break;
	}
	swap(a[i], a[right]);
	return i;
}


//void QuickSort2(int *a, int left, int right)
//{
//	stack<int> s;
//	s.push(left);
//	s.push(right);
//
//		while (!s.empty())
//		{
//			int r = s.top();
//			s.pop();
//			int l = s.top();
//			s.pop();
//			int p = partition(a, l, r);
//			if (p - 1 > 1)
//			{
//				s.push(l);
//				s.push(r);
//			}
//			if (p + 1 < r)
//			{
//				s.push(p + 1);
//				s.push(r);
//			}
//		}
//}


void Quick_Sort2(int  *arr, int len)
{
	//1.����һ���ڴ浱ջ
	//2.����һ�ο��������ҵ���׼
	//3.����� �ұߵ����Խ�����ջ
	//4.ȡ�����ݽ���һ�˿�������
	//5.top>0
	int *stack = (int *)malloc(sizeof(int) * len);//����ջ�Ĵ�С
	assert(stack != NULL);
	int top = 0;
	int low = 0;
	int high = len - 1;
	int par = partition(arr, low, high);
	if (par > low + 1)//�������������������ʱ  ��ջ
	{
		stack[top++] = low;
		stack[top++] = par - 1;
	}
	if (par < high - 1)//�ұ��������������������ʱ  ��ջ
	{
		stack[top++] = par + 1;
		stack[top++] = high;
	}
	while (top > 0)//��ջ  ջ���գ���Ҫȡ�������ݳ�������
	{
		high = stack[--top];
		low = stack[--top];
		par = partition(arr, low, high);
		if (par > low + 1)
		{
			stack[top++] = low;
			stack[top++] = par - 1;
		}
		if (par < high - 1)
		{
			stack[top++] = par + 1;
			stack[top++] = high;
		}
	}
	free(stack);
	stack = NULL;
}

void prit(int *a,int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int main()
{
	int a[9] = { 49, 38, 65, 97, 76, 13, 27, 49 };
	cout << "ԭ�����ǣ�" << endl;
	prit(a, 8);
	cout << "�ݹ���������" << endl;
	QuickSort1(a, 0, 7);
	prit(a, 8);
	cout << "�ǵݹ���������" << endl;
	Quick_Sort2(a, 8);
	prit(a, 8);
	system("pause");
	return 0;
}