#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

/**
 * binary_tree_nodes - Function that counts the nodes with at
 * least 1 child in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count the number or nodes
 *
 * Return: The ammount of the nodes otherwise if the tree is null return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes = 0;
	size_t right_nodes = 0;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	return (left_nodes + right_nodes + 1);

}
