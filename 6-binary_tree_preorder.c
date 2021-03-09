#include "binary_trees.h"

/**
 * binary_tree_preorder - Func that goes through a binary tree using
 *	pre-order traversal.
 *@tree: Tree to print.
 *@func: Function that prints.
 *
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
