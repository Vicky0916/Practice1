#pragma once
#include<iostream>
#include<assert.h>
#include<string.h>
using namespace std;
	class my_string
	{
	public:
		typedef char* iterator;
		iterator begin()
		{
			return _str;
		}
		iterator end()
		{
			return _str + _size;
		}
		//构造函数
		my_string(const char *str=" ") 
		{
			if (str == nullptr)
				return;
			_size = strlen(str);
			_capacity = _size;
			_str = new char[_capacity + 1];
			strcpy(_str, str);
		}

		//深拷贝
		my_string(const my_string&s)
		{
			delete[] _str;
			my_string tmp=new char[strlen(s._str) + 1];
			strcpy(_str, tmp._str);
			_size = strlen(s._str);
		}

		~my_string()  //析构函数
		{
			if (_str)
			{
				delete[]_str;
				_str = nullptr;
				_size = 0;
				_capacity = 0;
			}
		}
		char *c_str()
		{
			return _str;
		}

		my_string& operator=(const my_string&s)  //重载赋值运算符
		{
			if (this!= &s)
			{
				my_string tmp(s._str);
				swap(_str, tmp._str);
			}
			return *this;
		}

		void Insert(size_t pos, size_t x)
		{
			assert(pos <= _size);
			int i = _size;
			if (_size = _capacity)
				Reserve(_capacity * 2);
			for (i = _size; i >(int) pos; i--)
			{
				_str[i+1] = _str[i];
			}
			_str[pos] = x;
			++_size;
			_str[_size] = '\0';
		}
		void Reserve(size_t newcapacity)
		{
			if (newcapacity > _capacity)
			{
				char* str = new char[newcapacity + 1];
				strcpy(str, _str);
				delete[] _str;
				_str = str;
				_capacity = newcapacity;
			}

		}
		void  pushback(char c)
		{
			if (_size == _capacity)
			{
				Reserve(_capacity * 2);
			}
			_str[_size++] = c;
			_str[_size] = '\0';
		}
		my_string operator+=(char ch)
		{
			pushback(ch);
			return *this;
		}

		my_string &insert(size_t pos, const char*str)
		{
			assert(pos <= _size);
			size_t len = strlen(str) ;
			if (len + _size > _capacity)
			{
				Reserve(len + _size);
			}
			for (size_t i = len + _size; i > (int)pos; i--)
			{
				_str[ i] = _str[i-len];

			}
			for (size_t j = 0; j < len; j++)
			{
				_str[j + pos] = str[j];
				++_size;
			}
			_str[_size] = '\0';
			return *this;
		} 
		my_string Erase(size_t pos)
		{
			assert(pos < _size);
			for (size_t i = pos; i < _size; i++)
			{
				_str[pos] = _str[pos + 1];
				--_size;
			}
			return *this;
		}

		//从pos等于0的位置开始向后找ch
		size_t find(char ch,size_t pos=0)
		{
			assert(pos < _size);
			for (size_t i = 0; i < strlen(_str); i++)
			{
				if (_str[i] == ch)
				{
					return i;
				}
			}
			return 0;
		}
		void resize(size_t capacity, char ch)
		{
			if (capacity > _capacity)
			{
				Reserve(capacity);
			}
			memset(_str + _size, ch, capacity - _capacity);
		}
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};



int main()
{
	my_string s1;
	s1.pushback(1);
	s1.pushback(2);
	s1.pushback(3);

	my_string::iterator it = s1.begin();
	while (it != s1.end())
	{
		cout << *it << endl;
		++it;
	}

	my_string s2(s1);
	cout << s2.c_str() << endl;

	system("pause");
	return 0;
}