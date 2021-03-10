#include "binary_trees.h"

/**
 * binary_tree_height - Func that measures the height of a binary tree.
 *@tree: Pointer to the tree to check.
 *
 * Return: 0 if tree doesn't exist, height of the tree otherwise.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	if (tree->left)
		left = 1 + binary_tree_height(tree->left);

	if(right > left)
		return (right);

	return (left);
}
