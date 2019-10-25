#include <iostream>
#include <stdlib.h>
#include <assert.h>
#include "List.h"
#include <algorithm>
#include "List.h"
using namespace std;

	

	////template <class T, class Ref, class Ptr>
	//template<class T>
	//struct _iterator
	//{
	//	//typedef _iterator<T, Ref, Ptr> iterator;
	//	typedef ListNode<T> Node;
	//	//typedef Ref Reference;
	//	//typedef Ptr pointer;
	//	Node *_node;
	//	_iterator(Node *node) :_node(node)
	//	{}

	//	/*Ref operator*()
	//	{
	//		return node->_data;
	//	}

	//	Ptr operator->()
	//	{
	//		return &(Node->data);
	//	}*/

	//	T &operator*()
	//	{
	//		return _node->data;
	//	}

	//	_iterator<T> & operator++()  //前置返回加完后的值
	//	{
	//		_node = _node->_data;
	//		return *this;
	//	}
	//	_iterator<T> & operator++(int)  //后置返回之前的值
	//	{
	//		_iterator<T> tmp;
	//		_node = _node->_next;
	//		return tmp;
	//	}

	//	bool operator!=(const _iterator<T> &it)
	//	{
	//		return _node != it._node;
	//	}
	//};


int  main()
{
	CR::test1();
	system("pause");
	return 0;
}
