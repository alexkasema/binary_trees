#include "binary_trees.h"

/**
 * binary_tree_balance - function measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: diffrence between height of left and right subtree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_size_height = 0, right_size_height = 0;

	if (!tree)
		return (0);
	left_size_height = binary_tree_height(tree->left);
	right_size_height = binary_tree_height(tree->right);

	return (left_size_height - right_size_height);
}

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

	left_side_size += 1 + binary_tree_height(tree->left);
	right_side_size += 1 + binary_tree_height(tree->right);

	if (left_side_size > right_side_size)
		return (left_side_size);
	else
		return (right_side_size);
}
