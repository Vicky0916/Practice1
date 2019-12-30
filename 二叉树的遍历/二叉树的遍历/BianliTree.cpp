#include <iostream>
#include <stdlib.h>
using namespace std;

void InOrderLoop(TreeNode *root)
{
	std::stack<TreeNode *> s;
	TreeNode *cur;
	cur = root;
	while (cur != NULL || !s.empty())
	{
		while (cur != NULL)
		{
			s.push(cur);
			cur = cur->left;
		}

		cur = s.top();
		s.pop();
		printf("%c ", cur->data);

		cur = cur->right;
	}
}
//�������
void InOrder(const TreeNode *root)
{
	if (root == NULL)              //�жϽڵ��Ƿ�Ϊ��
	{
		printf("# ");
		return;
	}
	InOrder(root->left);           //�������������
	printf("%c ", root->data);     //���ʽڵ�ֵ
	InOrder(root->right);          //�������������
}
