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
		//���ȼ�����,����С�ѣ���ǰk��Ԫ������ѣ��ٴ����ϵ���
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
	cout << "��һ��"<< ret << endl;
	sort(s.begin(), s.end());
	cout << "����: "<< s[s.size() - 3] << endl;
	system("pause");
	return 0;
}