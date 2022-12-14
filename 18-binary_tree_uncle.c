#include "binary_trees.h"

/**
 *binary_tree_uncle - a function that finds the uncle of a node
 *@node: a pointer to the node to find the uncle
 *Return: returns a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
int a;
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
return (NULL);
a = node->parent->n;
node = node->parent->parent;
if (node->left != NULL && node->right != NULL)
{
if (node->left->n == a)
{
node = node->right;
return (node);
}
else
{
node = node->left;
return (node);
}
}
return (NULL);
}
