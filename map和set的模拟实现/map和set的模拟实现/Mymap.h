#pragma once
#include "RBTree.h"
namespace CR
{
	template<class K, class V>
	class map
	{
	public:
		void Insert(const pair<K, V>& kv)
		{
			_t.Insert(kv);
		}
	private:
		struct MapKeyOfValue
		{
			const K& operator()(const pair<K, V>& kv)
			{
				return kv.first;
			}
		};
		RBTree < K, pair<K, V>, MapKeyOfValue> _t;
	};
}

