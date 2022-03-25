#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"
#include "9-binary_tree_height.c"


/**
 * binary_tree_is_perfect - Function that checks if a binary tree
 * is perfect
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the binary tree is perfect otherwise if the tree
 * is null return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left_tree, *right_tree;

	if (tree == NULL)
		return (0);

	left_tree = tree->left;
	right_tree = tree->right;

	if (binary_tree_is_leaf(tree))
		return (1);

	if (left_tree == NULL || right_tree == NULL)
		return (0);

	if (binary_tree_height(left_tree) == binary_tree_height(right_tree))
	{
		if (binary_tree_is_perfect(left_tree) && binary_tree_is_perfect(right_tree))
			return (1);
	}

	return (0);
}
