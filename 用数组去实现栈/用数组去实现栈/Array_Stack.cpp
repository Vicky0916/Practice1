#include <iostream>
#include <stdlib.h>
#include <string.h>
#define MAX 1000
using namespace std;
class ArrayToStack 
{
public:
	ArrayToStack()
	{
		data = new int[MAX];
		top = -1;
	}
	bool push(int x)
	{
		//�����Ƿ���Ҫ����
		if (top >= MAX-1)
		{
			return false;
		}
		data[top++] = x;
		return true;
	}
	//�鿴ջ����Ԫ��
	int Gettop()
	{
		if (top == -1)
		{
			return 0;
		}
		int top = sizeof(data) / sizeof(data[0])-1;
		return data[top];
	}
	//��ջջ��Ԫ��
	bool pop(int &x)
	{
		if (top == -1)
			return false;
		x = data[top];
		top--;
		return true;
	}
	//�ÿ�
	bool Empty()
	{
		top = -1;
		return true;
	}
	
	void display()
	{
		if (top == -1)
		{
			cout << "Empty Stack" << endl;
		}
		for (int i = -1; i <top; i++)
		{
			cout << data[i] << " ";
		}
		cout << endl;
	}
private:
	int *data;
	int top;

};
int main()
{

	ArrayToStack a;
	a.push(1);
	a.push(2);
	a.push(3);
	a.push(4);
	a.display();
	system("pause");
	return 0;
}