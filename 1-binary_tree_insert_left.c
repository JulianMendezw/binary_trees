#include "binary_trees.h"

/**
 * binary_tree_insert_left - Func that adds a node only in the left side.
 *@parent: Pointer to parent node.
 *@value: valuse to set in the node.
 *
 * Return: A new node or NULL if fails.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (parent->left)
	{
		node->left = parent->left;
		node->left->parent = node;
	}
	parent->left = node;

	return (node);
}
