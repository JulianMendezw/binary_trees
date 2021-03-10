#include "binary_trees.h"

/**
 * binary_tree_nodes - Func that counts the nodes with at least 1
 * child in a binary tree.
 *@tree: Pointer to tree to check.
 *
 * Return: 0 if tree is NULL, leaves otherwise.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t sum = 0;

	if (tree)
	{
		if (tree->left || tree->right)
			sum += 1;

		sum += binary_tree_nodes(tree->left);
		sum += binary_tree_nodes(tree->right);
	}
	return (sum);
}
