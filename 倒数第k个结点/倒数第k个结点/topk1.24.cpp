#include <iostream>
using namespace std;
class solution
{
public:
	ListNode* FindKthToTail(ListNode *pListedHead, unsigned k)
	{
		ListNode* fast = pListHead;
		ListNode* slow = pListHead;
		while (k--)
		{
			if (fast == null)
			{
				return null;
			}
			fast = fast->next;
		}

		while (fast != null)
		{
			fast = fast->next;
			slow = slow->next;
		}
		return slow;
	}
};
int main()
{

}