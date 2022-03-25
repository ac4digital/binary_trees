#include "binary_trees.h"


/**
 * binary_tree_sibling - Function that finds the sibling of a node
 *
 * @node: Pointer to the root node of the tree to check
 *
 * Return: The sibling of the node otherwise NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
