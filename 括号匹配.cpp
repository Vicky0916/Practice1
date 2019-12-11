//class Parenthesis {
//public:
//	bool chkParenthesis(string A, int n) {
//		 write code here     
//		int l = 0; //×óÀ¨ºÅÊı    
//		for (int i = 0; i < A.length(); i++)
//		{
//			char c = A[i];
//			if (c == '(')
//			{
//				l++;
//			}
//			else if
//				(c == ')')
//			{
//				if (l > 0)
//				{
//					l--;
//				}
//				else
//				{
//					return false;
//				}
//			}
//			else
//			{
//				return false;
//			}
//		}
//		return l == 0;
//	}
//}; 

#include <iostream>
#include <stdlib.h>
using namespace std;
class A
{
public:
	A() :m_ival(0) {
		test();
	}
	virtual void func()
	{
		cout << m_ival << ' ';
	}
	void test()
	{
		func();
	}
public:
	int m_ival;
};
class B :public A
{
public:
	B() {
		test();
	}
	virtual void func()
	{
		++m_ival;
		cout << m_ival << ' ';
	}
};
int main()
{
	A *p = new B;
	p->test();
	system("pause");
	return 0;
}