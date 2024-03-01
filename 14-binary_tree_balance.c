#include "binary_trees.h"
/**
* binary_tree_height -  measures the height of a binary tree
* @tree: a pointer to the root node of the tree to measure the height.
* Return: height or 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t leftheight = 0, rightheight = 0;

if (tree == NULL)
{
return (0);
}

leftheight = binary_tree_height(tree->left);
rightheight = binary_tree_height(tree->right);

if (leftheight > rightheight)
{
return (1 + leftheight);
}

else
{
return (1 + rightheight);
}

}


/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: a pointer to the root node of the tree to measure the balance factor
* Return: balance factor or 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
