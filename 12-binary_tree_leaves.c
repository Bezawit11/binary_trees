#include "binary_trees.h"

/**
 *binary_tree_leaves -  function that counts the leaves in a binary tree
 *@tree: a pointer to the root node of the tree to count the number of leaves
 *Return: returns the number of leaves in a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t c = 0;
if (tree == NULL)
{
return (0);
}
if (tree->right == NULL && tree->left == NULL)
{
c = c + 1;
}
else
{
c = c + binary_tree_leaves(tree->left);
c = c + binary_tree_leaves(tree->right);
}
return (c);
}
