//判断一个链表是否为回文结构
//快慢指针
class solution
{
	bool IsHuiwen(LinkListNode* A)
	{
		LinkListNode* slow = A;
		LinkListNode* fast = A;

		while (fast != NULL && fast->next != NULL)
		{
			slow = slow->next;
			fast = fast->next->next; 
		}
		LinkListNode* leftList = A;
		LinkListNode* rightList = slow->next;
		slow->next = NULL;

		//逆置单链表
		rightList = reverseList(rightList);

		while (rightList != NULL)
		{
			if (leftList->val != rightList->val)
				return false;
			leftList = leftList->next;
			rightList = rightList->next;
		}
		return true; 
	}
};