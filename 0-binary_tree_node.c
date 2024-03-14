#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 *
 * @parent: - is a pointer to the parent node of the node to create
 * @value: - is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* declaration of the new node with its data type */
	binary_tree_t *new;
	/* allocate memory space for that node */
	new = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		return (NULL);
	}

	/* assign values to the properties of the node */
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	/* return a pointer to the node */
	return (new);
}
