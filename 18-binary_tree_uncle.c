#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node.
 *
 * @node: Node to check.
 *
 * Return: Null or  sibling otherwise.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent && node->parent->parent
		&& node->parent->parent->left && node->parent->parent->right)
	{
		if (!node->parent->parent->left || !node->parent->parent->right)
			return (NULL);

		if (node->parent->parent->left->n == node->parent->n)
			return (node->parent->parent->right);
		else
			return (node->parent->parent->left);
	}
	return (NULL);
}
