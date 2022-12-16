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

/**
 *binary_tree_height - measures the height of a binary tree
 *@tree: a pointer to the root node of the tree to measure the height
 *Return: returns the height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t c = 0, a = 0;
if (tree == NULL)
return (0);
if (tree->left != NULL || tree->right != NULL)
{
c = 1 + binary_tree_height(tree->left);
a = 1 + binary_tree_height(tree->right);
}
if (a > c)
return (a);
else
return (c);
}

/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: a pointer to the root node of the tree to measure the balance factor
 *Return: returns the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int a = 0, b = 0;
if (tree == NULL)
return (0);
if (tree->left != NULL)
{
a = 1 + binary_tree_height(tree->left);
}
if (tree->right != NULL)
{
b = 1 + binary_tree_height(tree->right);
}
return (a - b);
}
