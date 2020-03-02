#pragma once
#include "RBTree.h"
namespace CR
{
	template<class K,class V,class KeyofValue>

	class set
	{
	public:
		void Insert(const k& k)
		{

			_t.Insert(k);
		}
	private:
		struct SetKeyOfValue
		{
		 const K& operator()(const K& k)
			{
				return k;
			}
		};
		RBTree < K, K, SetKeyOfValue> _t;
	};
}
