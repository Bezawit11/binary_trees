#include "binary_trees.h"
size_t binary_tree_helper(const binary_tree_t *tree);

/**
 *binary_tree_helper - a helper function to binary_tree_size
 *@tree: a pointer to the root node of the tree to measure the size
 *Return: returns the siae of a binary tree
 */
size_t binary_tree_helper(const binary_tree_t *tree)
{
size_t c = 0, a = 0;
if (tree == NULL){
return 0;}
if (tree->left != NULL)
{
c = 1 + binary_tree_helper(tree->left);
}
if (tree->right != NULL)
{
a = 1 + binary_tree_helper(tree->right);
}
return c + a;
}

/**
 *binary_tree_size -  function that measures the size of a binary tree
 *@tree: a pointer to the root node of the tree to measure the size
 *Return: returns the siae of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t i = 0;
if (tree == NULL)
return 0;
i = 1 + binary_tree_helper(tree);
return i;
}
