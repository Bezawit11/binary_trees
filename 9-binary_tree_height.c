#include "binary_trees.h"

/**
 *binary_tree_height - a function that measures the height of a binary tree
 *@tree: a pointer to the root node of the tree to measure the height
 *Return: returns the height of the tree, if null returns 0 
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t c = 0, a = 0;
if (tree == NULL)
{
return 0;
}
if (tree->left != NULL || tree->right != NULL)
{
c = 1 + binary_tree_height(tree->left);
a = 1 + binary_tree_height(tree->right);
}
if (a > c)
return a;
else
return c;
}
