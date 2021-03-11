#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node.
 *
 * @node: Node to check.
 *
 * Return: Null or  sibling otherwise.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
	{
		if (!node->parent->left || !node->parent->right)
			return (NULL);

		if (node->parent->left->n == node->n)
			return (node->parent->right);

		else
			return (node->parent->left);
	}
	return (NULL);
}
