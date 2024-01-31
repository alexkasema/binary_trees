#include "binary_trees.h"
/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: Number of leaves in a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t no_leaves = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		no_leaves += 1;

	no_leaves += binary_tree_leaves(tree->left);
	no_leaves += binary_tree_leaves(tree->right);

	return (no_leaves);
}
