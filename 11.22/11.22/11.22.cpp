#include <iostream>
#include <stdlib.h>
int minDepth(struct TreeNode* root)
{
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
		return 1;
	int leftDepth = minDepth(root->left);
	int rightDepth = minDepth(root->right);
	if (root->left == NULL || root->right == NULL)
		return leftDepth + rightDepth + 1;
	return leftDepth < rightDepth ? leftDepth + 1 : rightDepth + 1;
}
int main()
{
	system("pause");
	return 0;
}