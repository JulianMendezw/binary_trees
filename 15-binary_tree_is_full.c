#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks if a binary tree is full
 *
 * @tree: Tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int lfull = 0, rfull = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);

		lfull = binary_tree_is_full(tree->left);
		rfull = binary_tree_is_full(tree->right);

		if (tree->left && tree->right)
			if (lfull == 1 && rfull == 1)
				return (1);
	}
	return (0);
}
