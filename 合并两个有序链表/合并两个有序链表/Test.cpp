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