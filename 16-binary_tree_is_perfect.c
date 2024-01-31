#include "binary_trees.h"

/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if all levels are filled, else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((binary_tree_is_full(tree) == 1) &&
			(binary_tree_balance(tree) == 0))
		return (1);
	return (0);
}

/**
 * binary_tree_is_full - A function that checks if a binary tree is full.
 * @tree: pointer to the root node of the tree to check.
 * Return: 1 if node has either 0 or 2 children, else 0
 *
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->left) &&
			 binary_tree_is_full(tree->right));
	}

	return (0);
}

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
