#include "binary_trees.h"

/**
 * binary_tree_is_root - Func that checks if a node is a root.
 *@node: Pointer to node to check.
 *
 * Return: 1 if node is a leaf, 0 otherwise.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	return (!node || !node->parent ? 1 : 0);
}
