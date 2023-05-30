#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_t - Binary tree node
 * @parent: Pointer to the parent node
 * @value: Integer stored in the node
 * Return: NULL or the new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (!parent)
        return (NULL);

    binary_tree_t *new = malloc(sizeof(binary_tree_t));

    if (!new)
        return (NULL);

    binary_tree_t *old_left = parent->left;
    parent->left = new;
    new->n = value;
    new->parent = parent;
    new->left = old_left;
    new->right = NULL;

    if (old_left != NULL) {
        old_left->parent = new;
    }

    return new;
}

