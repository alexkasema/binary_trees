#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: Number of edges in longest path from root to leaf
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side_size = 0;
	size_t right_side_size = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_side_size += 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_side_size += 1 + binary_tree_height(tree->right);

	if (left_side_size > right_side_size)
		return (left_side_size);
	else
		return (right_side_size);

}
