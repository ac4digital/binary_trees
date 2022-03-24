#include "binary_trees.h"


/**
 * binary_tree_depth - Function that measures the depth of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the depth
 *
 * Return: The depth of the tree if the tree is null return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (depth);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);

}
