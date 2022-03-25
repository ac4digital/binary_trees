#include "binary_trees.h"

/**
 * binary_trees_ancestor - Function that finds the lowest common
 * ancestor of two nodes
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 * Return: A pointer to the lowest common ancestor node of the two given nodes
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *tmp;

	if (first == NULL || second == NULL)
		return (NULL);

	tmp = (binary_tree_t *)second;

	while (first)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		second = tmp;
		first = first->parent;
	}
	return (NULL);
}
