#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"


/**
 * binary_tree_is_full - Function that checks if a binary tree is full
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the binary tree is full otherwise if the tree is null return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if (left == 0 || right == 0)
		return (0);

	return (1);
}
