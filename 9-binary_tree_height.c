#include "binary_trees.h"
/**
* binary_tree_is_leaf - checks if a node is a leaf
* @node: a pointer to the node to check
* Return: 1 if node is a leaf, otherwise 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}

if (node->left == NULL && node->right == NULL)
{
return (1);
}
else
{
return (0);
}
}

/**
* binary_tree_height -  measures the height of a binary tree
* @tree: a pointer to the root node of the tree to measure the height.
* Return: height or 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t leftheight, rightheight;

if (tree == NULL || binary_tree_is_leaf(tree))
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
}}
