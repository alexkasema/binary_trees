#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: length of path from root to current node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		depth += 1 + binary_tree_depth(tree->parent);

	return (depth);
}
