#include "binary_trees.h"

/**
 * binary_tree_size - Func tha  measures the size of a binary tree
 *@tree: Pointer to tree to check.
 *
 * Return: 0 if tree is NULL, zise otherwise.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0;

	if (tree)
	{
		left += 1;
		binary_tree_size(tree->left);
		binary_tree_size(tree->right);
	}
	return (left);
}
