#include "binary_trees.h"
size_t binary_tree_helper(const binary_tree_t *tree);

/**
 *
 */
size_t binary_tree_helper(const binary_tree_t *tree)
{
size_t c = 0, a = 0;
if (tree == NULL){
return 0;}
if (tree->left != NULL){
c = 1 + binary_tree_helper(tree->left);}
if (tree->right != NULL){
a = 1 + binary_tree_helper(tree->right);}
return c + a;
}

/**
 *
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t i = 0;
i = 1 + binary_tree_helper(tree);
return i;
}
