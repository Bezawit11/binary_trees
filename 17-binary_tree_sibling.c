#include "binary_trees.h"
/**
 *
 *
 *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
int a;
if (node == NULL || node->parent == NULL){
return NULL;
}
a = node->n;
node = node->parent;
if (node->left != NULL && node->right != NULL){
if (node->left->n == a){
node = node->right;
return node;
}
else
{
node = node->left;
return node;
}
}
return NULL;
}
