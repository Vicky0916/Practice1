#pragma once
#include <iostream>
#include <stdlib.h>
#include <assert.h>
#include "List.h"
#include <algorithm>
using namespace std;

namespace CR
{
	template <class T>
	struct ListNode
	{
		ListNode<T>* _next;
		ListNode<T>* _prev;
		T _data;
		ListNode(const T&x)
			:_next(nullptr)
			, _prev(nullptr)
			, data(x)
		{}
	};

	template<class T>
	struct _iterator
	{
		typedef ListNode<T> node;
		node *_node;
		_iterator(node * node) :_node(node)
		{}
		T &operator*()
		{
			return _node->_data;
		}

		_iterator<T> & operator++()  //前置返回加完后的值
		{
			_node = _node->_next;
			return *this;
		}
		_iterator<T> & operator++(int)  //后置返回之前的值
		{
			_iterator<T> tmp(*this);
			_node = _node->_next;
			return tmp;
		}

		bool operator!=(const _iterator<T> &it)
		{
			return _node != it._node;
		}
	};

	template<class T>
	class List
	{
		typedef ListNode<T> node;
	public:
		typedef ListNode<T> iterator;
		iterator begin()
		{
			return iterator(_head->next);
		}
		iterator end()
		{
			return iterator(_head);
		}
		List()
		{
			_head = new node(T());
			_head->_next = _head;
			_head->_prev = _head;
		}
		void push_back(const T&x)
		{
			node *tail = _head->prev;
			node* newnode = new node(x);
			//head...tail..newnode  三个进行链接
			tail->_next = newnode;
			newnode->_prev = tail;
			newnode->_next = _head;
			_head->_prev = newnode;
		}
	private:
		node *_head;
	};

	void test1()
	{
		List<int> l;
		l.push_back(1);
		l.push_back(2);
		l.push_back(3);
		l.push_back(4);
		List<int>::iterator it = l.begin();
		while (it != l.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;
	}
}


