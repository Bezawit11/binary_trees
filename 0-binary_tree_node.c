#include "binary_trees.h"

/**
 *binary_tree_node - a function that creates a binary tree node
 *@parent: a pointer to the parent node of the node to create
 *@value: a value to put in the new node
 *Return: returns a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)

{
binary_tree_t *a = malloc(sizeof(binary_tree_t));
a->n = value;
if (parent != NULL && parent->n == value && parent->left != NULL && parent->right != NULL)
{
return NULL;
}
if (parent == NULL)
{
a->left = NULL;
a->right = NULL;
a->parent = NULL;
return a;
}
else
{
a->left = NULL;
a->right = NULL;
a->parent = parent;
if (value < parent->n)
{
parent->left = a;
}
else
{
parent->right = a;
}
return a;
}
}
