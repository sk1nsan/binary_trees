#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle  of a node
 *
 * @node:  pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent_node;

	if (!node || !(node->parent) || !((node->parent)->parent))
		return (NULL);
	parent_node = node->parent;
	if ((parent_node->parent)->left != parent_node)
		return ((parent_node->parent)->left);
	if ((parent_node->parent)->right != parent_node)
		return ((parent_node->parent)->right);
	return (NULL);
}
