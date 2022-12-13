#include "binary_trees.h"

/**
 *binary_tree_insert_left - inserts a node as the left-child of another node
 *@parent: pointer to the node to insert the left-child in 
 *@value: the value to store in the new node
 *Return: returns a pointer to a created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)

{
binary_tree_t *a = malloc(sizeof(binary_tree_t));
if (parent == NULL || a == NULL)
return (NULL);
a->n = value;
a->parent = parent;
a->left = NULL;
a->right = NULL;
if (parent->left != NULL)
{
a->left = parent->left;
a->left->parent = a;
}
parent->left = a;
return (a);   
}
