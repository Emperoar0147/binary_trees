#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth = binary_tree_depth(tree);
	size_t size = binary_tree_size(tree);
	size_t perfect_size;

	if (tree == NULL)
	return (0);

	perfect_size = (1 << (depth + 1)) - 1;

	return (size == perfect_size);
}
