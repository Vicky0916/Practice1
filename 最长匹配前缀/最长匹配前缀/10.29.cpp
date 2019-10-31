////class Solution {
////public:
////	string longestCommonPrefix(vector<string>& strs)
////	{
////		if (strs.size() == 0)
////			return "";
////		auto s1 = max_element(strs.begin(), strs.end());
////		auto s2 = min_element(strs.begin(), strs.end());
////		aoto pair = mismatch(s1->begin(), s1->end(), s2->begin());
////		return string(s1->begin(), pair.first);
////	}
////};
//
//
////去除重复元素
//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//using namespace std;
//
//class solution
//{
//public :
//	int  removeDuplicates(vector<int> &nums) 
//	{
//		if (nums.empty())
//		{
//			return 0;
//		}
//		int j = 0;
//		for (int i = 1; i < nums.size(); i++)
//		{
//			if (nums[i] != nums[j])
//			{
//				nums[++j] = nums[i];
//			}
//		}
//		return j + 1;
//	}
//};
//int main()
//{
//	solution s1;
//	vector<int> s;
//	s.push_back(1);
//	s.push_back(1);
//	s.push_back(2);
//	s.push_back(3);
//	s.push_back(3);
//	int ret=s1.removeDuplicates(s);
//	cout << ret << endl;
//	for (int i = 0; i < s.size(); i++)
//	{
//		cout << s[i] << " ";
//	}
//	cout << endl/*;*/
//	system("pause");
//	return 0;
//}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//合并两个有序的单链表
class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
	{
		ListNode*p1 = l1;
		ListNode*p2 = l2;
		/*if(l1==null&&l2!=null)
		{
			return l2;
		}
		if(l2==null&&l1!=null)
		{
			return l1;
		}
		if(l1==null&&l2==null)
		{
			return null;
		}*/
		ListNode *result = new ListNode(0);
		ListNode *p3 = result;
		while (p1&&p2)
		{
			if (p2->val > p1->val)
			{
				p3->next = p1;
				p3 = p3->next;
				p1 = p1->next;
			}
			else
			{
				p3->next = p2;
				p3 = p3->next;
				p2 = p2->next;
			}
		}
		if (p1)
			p3->next = p1;
		if (p2)
			p3->next = p2;
		return result->next;
	}
};