#include "binary_trees.h"


/**
 * binary_tree_balance - Function that measures the balance factor
 * or a binary tree at least 1 child in a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor otherwise if the tree is null return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_balance = 0;
	int right_balance = 0;

	if (tree == NULL)
		return (0);

	left_balance = binary_tree_height(tree->left);
	right_balance = binary_tree_height(tree->right);

	return (left_balance - right_balance);
}
