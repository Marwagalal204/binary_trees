#include "binary_trees.h"
/**
* treelength -  length of a tree
* @tree: a pointer to the root node of the tree to check
* Return: 1 or 0
*/

int treelength(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}

return (1 + treelength(tree->left) + treelength(tree->right));
}

/**
* binary_tree_is_perfect -  checks if a binary tree is perfect
* @tree: a pointer to the root node of the tree to check
* Return: 1 or 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int length;

if (tree == NULL)
{
return (0);
}
length = treelength(tree);

return ((length & (length + 1)) == 0);

}
