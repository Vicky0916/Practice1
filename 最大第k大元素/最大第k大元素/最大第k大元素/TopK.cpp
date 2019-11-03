#include <iostream>
#include <vector>
#include <queue>
#include <stdlib.h>
using namespace std;
	class solution
{
public:
	int findKlargest(vector<int> nums, int k)
	{
		priority_queue<int, vector<int>, greater<int>> kminheap;
		//优先级队列,建立小堆，让前k个元素先入堆，再次向上调整
		for (size_t i = 0; i < k; i++)
		{
			kminheap.push(nums[i]);
		}
		for (size_t i = k; i < nums.size(); i++)
		{
			if (kminheap.top() < nums[i])
			{
				kminheap.pop();
				kminheap.push(nums[i]);
			}
		}
		return kminheap.top();
	}
};

int main()
{
	vector<int> s;
	solution s1;
	s.push_back(1);
	s.push_back(2);
	s.push_back(3);
	s.push_back(5);
	s.push_back(0);
	int ret=s1.findKlargest(s,3);
	cout << "法一："<< ret << endl;
	sort(s.begin(), s.end());
	cout << "法二: "<< s[s.size() - 3] << endl;
	system("pause");
	return 0;
}