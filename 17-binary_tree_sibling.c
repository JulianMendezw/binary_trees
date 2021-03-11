#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks if a binary tree is full
 *
 * @tree: Tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise.
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
