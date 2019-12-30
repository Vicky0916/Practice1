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
//中序遍历
void InOrder(const TreeNode *root)
{
	if (root == NULL)              //判断节点是否为空
	{
		printf("# ");
		return;
	}
	InOrder(root->left);           //中序遍历左子树
	printf("%c ", root->data);     //访问节点值
	InOrder(root->right);          //中序遍历右子树
}
