#include "binary_trees.h"

/**
 *binary_tree_insert_right - inserts a node as the right-child of another node
 *@parent: pointer to the node to insert the left-child in
 *@value: the value to store in the new node
 *Return: returns a pointer to a created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *a = malloc(sizeof(binary_tree_t));
if (a == NULL)
return (NULL);
if (parent == NULL)
{
free(a);
return (NULL);
}
a->n = value;
a->parent = parent;
a->left = NULL;
a->right = NULL;
if (parent->right != NULL)
{
a->right = parent->right;
a->right->parent = a;
}
parent->right = a;
return (a);
}
