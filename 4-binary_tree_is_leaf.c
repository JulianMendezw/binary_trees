#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Func that checks if a node is a leaf.
 *@node: Pointer to node to check.
 *
 * Return: 1 if node is a leaf, 0 otherwise.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (!node->left && !node->right ? 1 : 0);
}
