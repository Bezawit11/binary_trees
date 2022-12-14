#include "binary_trees.h"

/**
 *
 *
 */
 size_t binary_tree_height(const binary_tree_t *tree)
{
size_t c = 0;
if (tree == NULL)
{
return 0;
}
if (tree->left != NULL || tree->right != NULL)
{
if (tree->left != NULL)
{
binary_tree_height(tree->left);
c = c + 1;
}
if (tree->right != NULL)
{
binary_tree_height(tree->right);
c = c + 1;
}
}
return c;
}
