#include "binary_trees.h"

/**
 *
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t c = 0, a = 0;
if (tree == NULL){
return 0;}
if (tree->left != NULL || tree->right != NULL){
c = 1 + binary_tree_height(tree->left);
a = 1 + binary_tree_height(tree->right);}
if (a > c)
return a;
else
return c;
}

/**
 *
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int a = 0, b = 0;
if (tree == NULL){
return 0;}
if (tree->left != NULL){
a = 1 + binary_tree_height(tree->left);}
if (tree->right != NULL){
b = 1 + binary_tree_height(tree->right);}
return a - b;
}
