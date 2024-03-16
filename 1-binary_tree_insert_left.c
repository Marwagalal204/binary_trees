#include "binary_trees.h"
/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: a pointer to the node to insert the left-child in
* @value:  the value to put in the new node
* Return: a pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node, *tmp;
if (parent == NULL)
{
return (NULL);
}

node = binary_tree_node(parent, value);
if (node == NULL)
{
return (NULL);
}

if (parent->left != NULL)
{
tmp = parent->left;
parent->left = node;
parent->left->left = tmp;
tmp->parent = node;
}
parent->left = node;
return (node);
}
