#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
void InsertSort(int *a, int n)  //ֱ�Ӳ�������
{   //���ϵؽ��µ�Ԫ�ز��뵽�Ѿ��ź�˳���������
//����2 5 1 8 6���Ƚ�ǰ����Ԫ���ź����ٰ�1�����ȥ
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

void SelectSort(int *a, int n)//ѡ������
//��һ����������ֱ��ѡ�����ֵ����Сֵ����Сֵ�ŵ���һ�������ֵ�ŵ����һ��
//Ȼ�󲻶ϵ���С����
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

void BubleSort(int *a, int n)   //ð������
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
void ShellSort(int *a, int n)//ϣ������  
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

void AjustDown(int *a, int n,int root) //������
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
	//n-1-1ΪҶ�ӽڵ�ĸ������±�
	for (int i = (n -1-1) / 2; i >= 0; --i)
	{//���ѵĹ��̣����ȴ����һ��Ҷ�ӽڵ�ĸ��ڵ㿪ʼ�����µ���
		AjustDown(a, n, i);
	}
	int end = n - 1;
	while (end > 0)
	{//��������һ��Ҷ�ӽ����Ѷ������ݽ��н������ٰ�������ų����⣬���µ���ʣ�����
		Swap(&a[0], &a[end]);
		AjustDown(a, end, 0);
		--end;
	}
}

int PartQuickSort(int *a,int left,int right)
//����˼�� ���ȶ������һ����Ϊkey,��������ұ�key���
//���ұ����ұ�keyС�ģ�Ȼ�󽻻����ߵ�λ��
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
//����ҵ�left��right��ȣ���ô��ʱ��Ԫ�ؾ���һ���ָ��
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

// �ڿӷ��Ŀ�������
 //����˼�룺�Ƚ����һ��������Ϊkey,��tmp������������Ϊ���һ���ǿӣ��ٽ�left����ұ�key��ģ�right��ǰ�ұ�keyС��
//�ҵ�����left��ֵ��ӣ�left��Ϊ�µĿӣ�right Ҳ�����
//��left��right��ȵ�ʱ���ٽ�tmp��ֵ����a[left]
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

void QuickSortWK(int *a, int left, int right)   //�ڿӷ��Ŀ�������
{
	if (left > right)
		return;
	int key=PartQuickSort2(a, left, right);
	QuickSortWK(a, 0, key - 1);
	QuickSortWK(a, key + 1, right);
}

void _MergeSort(int *a, int left, int right,int *tmp)  //�鲢����
//����˼�룬�Ƚ�һ�������ϵ�ȡ�л��֣���ֻ��һ��Ԫ�ص�ʱ����return,Ȼ����й鲢����
//���ϵ�return
//����Ϊ���ֵĲ���
{
	if (left == right)
		return;
	int	 mid = left + (right - left) / 2;
	_MergeSort(a, left, mid,tmp);
	_MergeSort(a, mid + 1, right,tmp);
	//Merge(��������)
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
	//����һ���յ����飬���ڴ�ŷ��ص��������ص�������tmp�н��й鲢����
	//�ٽ��ź������������ԭ������
	int *tmp = (int *)malloc(sizeof(int)*n);
	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
}

//��������ĵ����ַ���
//����˼�룺����һ��prev��cur,prev�ȿ�ʼ��cur���һ����curֻ�ұ�keyС����
//�������prev+1!=cur,��ô�ͽ�����������ֱ��cur����key,�ٰ�prev++,��cur���н���
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

//�ǱȽ�����
//����˼�룺����һ�������ҳ����ֵ����Сֵ���������ֵ����Сֵ�����Ŀ�����������֮�����
//�ټ���ÿ�������ֵĴ���,����ÿ�������±��������˳��
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
	int *newcounta = (int*)malloc(sizeof(int)*(max-min));//��Ķ���ÿ�����ĸ���
	memset(newcounta, 0, sizeof(int)*range);  //��ʼ�����鶼Ϊ0
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
//����һ���ǵݹ�Ĺ鲢����

void Print(int *a, int n)   //��ӡ������
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
	printf("ԭ���������ǣ�\n");
	Print(a, size);
	printf("\n");
	/*InsertSort(a, size);
	printf("ֱ�Ӳ�������Ľ���ǣ�\n");
	Print(a, size);
	printf("\n");
	printf("ѡ������Ľ���ǣ�\n");
	SelectSort(a, size);
	Print(a, size);
	printf("\n");
	printf("ð������Ľ���ǣ�\n");
	BubleSort(a, size);
	Print(a, size);
	printf("\n");
    printf("ϣ������Ľ���ǣ�\n");
	ShellSort(a, size);
	Print(a, size); 
	printf("\n");
	printf("������Ľ���ǣ�\n");
	HeapSort(a, size);
	Print(a, size);
	printf("\n");*/
	/*printf("��������Ľ���ǣ�\n");
	QuickSort(a, 0, size-1);
	Print(a, size);
	printf("\n");
	printf("�ڿӷ��Ŀ����������ǣ�\n");
	QuickSortWK(a, 0, size-1);
	Print(a, size);
	printf("\n");
	printf("�����ֿ�������Ľ���ǣ�\n");
	QuickSort3(a, 0, size - 1);
	Print(a, size);*/
	//printf("\n");
	printf("��������Ľ���ǣ�\n");
	CountSort(a, size);
	Print(a, size);
	printf("\n");
	system("pause");
	return 0;
   }
