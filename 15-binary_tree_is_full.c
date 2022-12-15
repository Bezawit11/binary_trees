#include "binary_trees.h"

/**
 *binary_tree_is_full - function that checks if a binary tree is full
 *@tree: a pointer to the root node of the tree to check
 *Return: returns 1 if tree is full, otherwise 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
int c, a;
if (tree == NULL)
{
return (0);
}
if (tree->right != NULL && tree->left != NULL)
{
c = binary_tree_is_full(tree->left);
a = binary_tree_is_full(tree->right);
if (c == 0 || a == 0)
{
return (0);
}
else
return (1);
}
else if (tree->right == NULL && tree->left == NULL)
{
return (1);
}
else
return (0);
}
