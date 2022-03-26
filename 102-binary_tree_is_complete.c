#include "binary_trees.h"
#include "16-binary_tree_is_perfect.c"


/**
 * binary_tree_is_complete -  Function that checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if complete otherwise 0, if tree is NULL, return 0 too
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t l_height, r_height;
	binary_tree_t *l, *r;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	l = tree->left;
	r = tree->right;
	l_height = binary_tree_height(l);
	r_height = binary_tree_height(r);

	if (l_height == r_height)
	{
		if (binary_tree_is_perfect(l) && binary_tree_is_complete(r))
			return (1);
	}
	else if (l_height == r_height + 1)
	{
		if (binary_tree_is_complete(l) && binary_tree_is_perfect(r))
			return (1);
	}
	return (0);
}
