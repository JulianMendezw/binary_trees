#include "binary_trees.h"

/**
 * binary_tree_insert_right - Func that adds a node only in the right side.
 *@parent: Pointer to parent node.
 *@value: valuse to set in the node.
 *
 * Return: A new node or NULL if fails.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (parent->right)
	{
		node->right = parent->right;
		node->right->parent = node;
	}
	parent->right = node;

	return (node);
}
