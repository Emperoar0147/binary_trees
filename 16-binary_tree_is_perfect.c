#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);
	size_t nodes = binary_tree_size(tree);

	/* A tree is perfect if all internal nodes have two children */
	size_t perfect_nodes = 1;

	for (size_t i = 0; i < height; i++)
		perfect_nodes *= 2;

	return (perfect_nodes == nodes);
}
