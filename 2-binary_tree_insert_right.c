#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node || !parent)
	{
		free(new_node);
		return (NULL);
	}
	new_node->parent = parent;
	new_node->n = value;
	if (parent->right)
	{
		new_node->right = parent->right;
		(parent->right)->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
