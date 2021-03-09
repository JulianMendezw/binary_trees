#include "binary_trees.h"

/**
 * binary_tree_node - Func that creates a node.
 *@parent: Pointer to parent node.
 *@value: valuse to set in the node.
 *
 * Return: A new node or NULL if fails.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	/* Allocate memory for new node */
	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	/* If node fails */
	if (node == NULL)
		return (NULL);

	/* Assign data to this node */
	node->n = value;

	/* Assign pointer to parent node */
	node->parent = parent;
	/* Initialize left and */
	node->left = NULL;
	/* right children as NULL */
	node->right = NULL;

	return (node);
}
