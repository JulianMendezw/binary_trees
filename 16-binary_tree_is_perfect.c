#include "binary_trees.h"

/**
 * is_perfect - Func that checks if a binary tree is perfect
 *@root: a binary tree.
 *@d: Depth of the tree.
 *@level: the level of the tree.
 *
 * Return: 0 if tree is NULL, perfect or not perfect otherwise.
 */

int is_perfect(const binary_tree_t *root, int d, int level)
{
	/* Check if the tree is empty */
	if (!root)
		return (0);

	/* Check the presence of children */
	if (!root->left && !root->right)
		return (d == level + 1);

	if (!root->left || !root->right)
		return (0);

	return (is_perfect(root->left, d, level + 1) &&
			is_perfect(root->right, d, level + 1));
}

/**
 *depth - Func that calculate the depth
 *
 *@node: Pointer to node to check.
 *
 * Return: depth.
 */

int depth(const binary_tree_t *node)
{
	int d = 0;

	while (node != NULL)
	{
		d++;
		node = node->left;
	}
	return (d);
}

/**
 * binary_tree_is_perfect - Func that checks if a binary tree is perfect
 *
 *@tree: Pointer to tree to check.
 *
 * Return: 0 if tree is NULL, perfect or not perfect otherwise.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = depth(tree);

	return (is_perfect(tree, d, 0));
}
