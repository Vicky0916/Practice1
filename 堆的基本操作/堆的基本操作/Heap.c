#include "Heap.h"
#include <assert.h>

void HeapInit(Heap* hp, HPDataType* a, int n)
{
	assert(hp);
	hp->a = NULL;
	hp->capacity = hp->size = NULL;
}
void HeapDestory(Heap* hp)
{

}
void HeapPush(Heap* hp, HPDataType x)
{
	assert(hp);
	if (hp->size == hp->capacity)
	{
		size_t newcapacity = hp->capacity == 0 ? 2 : hp->capacity * 2;
		hp->a = (HPDataType*)malloc(sizeof(HPDataType)*newcapacity);
		hp->capacity = newcapacity;
		hp->a[hp->size] = x;
		hp->size++;
		Adjustup(a, size, child);
	}
}
void HeapPop(Heap* hp)
{
	assert(hp->size>0);
	{
		Swap(hp->a[0], hp->a[hp->size - 1]);
		hp->size--;
		Ajustdown(a, size, 0); 
	 }
}
HPDataType HeapTop(Heap* hp)
{
	assert(hp->size>0);
	return hp->a[0];
}
int HeapSize(Heap* hp)
{
	assert(hp->size>0);
	Heap*cur = hp;
	size_t size = 0;
	while (cur)
	{
		cur = cur->next;
		size++;
	}
}
int HeapEmpty(Heap* hp)
{
	assert(hp);
	while(hp->size)
	{
		hp->size--;
	}
}
void HeapPrint(Heap *hp)
{
	assert(hp->size>0);
	for (size_t i = 0; i < hp->size - 1; ++i)
	{
		printf("%d ", hp->a[i]);
	}
	printf("\n");
}
void Ajustdown(int *a, int n, size_t parent)  //向下调整
{
	   size_t child = 2 * parent + 1;
	   Heap *left=0; Heap *right=0;
		while (child + 1 < n&&a[left] < a[right])
		{
			++child;
	     }
		if (a[parent] > a[child])
		{
			Swap(&a[parent], &a[child]);
			parent = child;
			child = 2 * parent + 1;
		}
}