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
if (value == '\0' || a == NULL)
return (NULL);
a->n = value;
a->parent = parent;
a->left = NULL;
a->right = NULL;
return (a);
}
