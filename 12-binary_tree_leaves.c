#include "binary_trees.h"

/**
 * binary_tree_size - Func tha  measures the size of a binary tree
 *@tree: Pointer to tree to check.
 *
 * Return: 0 if tree is NULL, zise otherwise.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t sum = 0;

	if (tree)
	{
		sum += binary_tree_leaves(tree->left);
		sum += binary_tree_leaves(tree->right);
		if (!tree->left && !tree->right)
			return (1);
	}
	return (sum);
}
