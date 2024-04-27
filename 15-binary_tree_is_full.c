#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);

	/* If both children are NULL, it's a leaf node */
	if (tree->left == NULL && tree->right == NULL)
	return (1);

	/* If only one child is NULL, it's not full */
	if (tree->left == NULL || tree->right == NULL)
	return (0);

	/* Recursively check both subtrees */
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
