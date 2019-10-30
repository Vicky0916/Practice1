//class Solution {
//public:
//	string longestCommonPrefix(vector<string>& strs)
//	{
//		if (strs.size() == 0)
//			return "";
//		auto s1 = max_element(strs.begin(), strs.end());
//		auto s2 = min_element(strs.begin(), strs.end());
//		aoto pair = mismatch(s1->begin(), s1->end(), s2->begin());
//		return string(s1->begin(), pair.first);
//	}
//};


//È¥³ýÖØ¸´ÔªËØ
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

class solution
{
public :
	int  removeDuplicates(vector<int> &nums) 
	{
		if (nums.empty())
		{
			return 0;
		}
		int j = 0;
		for (int i = 1; i < nums.size(); i++)
		{
			if (nums[i] != nums[j])
			{
				nums[++j] = nums[i];
			}
		}
		return j + 1;
	}
};
int main()
{
	solution s1;
	vector<int> s;
	s.push_back(1);
	s.push_back(1);
	s.push_back(2);
	s.push_back(3);
	s.push_back(3);
	int ret=s1.removeDuplicates(s);
	cout << ret << endl;
	for (int i = 0; i < s.size(); i++)
	{
		cout << s[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}