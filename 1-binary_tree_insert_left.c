#include "binary_trees.h"

/**
 * binary_tree_t - Binary tree node
 * @parent: Pointer to the parent node
 * @value: Integer stored in the node
 * Return: NULL or the new node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

    if ((parent == NULL) || (new_node == NULL)) {
        return NULL;
    }

    binary_tree_t *old_left = parent->left;
    parent->left = new_node;
    new_node->parent = parent;
    new_node->n = value;
    new_node->left = old_left;
    new_node->right = NULL;

    if (old_left != NULL) {
        old_left->parent = new_node;
    }

    return new_node;
}

