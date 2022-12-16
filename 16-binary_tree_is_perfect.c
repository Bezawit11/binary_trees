#include "binary_trees.h"

/**
 *binary_tree_is_perfect - checks if a binary tree is perfect
 *@tree: a pointer to the root of the tree
 *Return: 1 if binary tree is perfect or otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if ((binary_tree_is_full(tree) == 1) && (binary_tree_balance(tree) == 0))
{
return (1);
}
return (0);
}

