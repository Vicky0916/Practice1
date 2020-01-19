//�ж�һ�������Ƿ�Ϊ���Ľṹ
//����ָ��
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

		//���õ�����
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