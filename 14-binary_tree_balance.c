#include "binary_trees.h"

/**
 * max - Function to calculate the maximum value
 *
 * @a: number to compare
 * @b: number to compare
 * Return: max value
 */

int max(int a, int b)
{
	return ((a >= b) ? a : b);
}

/**
 * _height - Function to calculate height of the tree
 *
 * @tree: the tree to calculate height
 * Return: height value
 */

int _height(binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + max(_height(tree->left), _height(tree->right)));
}

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

	if (right > left)
		return (right);

	return (left);
}

/**
 * binary_tree_balance - Function that measures the balance factor
 *
 * @tree: tree to measure
 * Return: balanca factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int leftSum, rightSum;

	if (!tree)
		return (0);

	if (tree->left)
		leftSum = binary_tree_height(tree->left);
	else
		leftSum = -1;

	if (tree->right)
		rightSum = binary_tree_height(tree->right);
	else
		rightSum = -1;

	return (leftSum - rightSum);
}
