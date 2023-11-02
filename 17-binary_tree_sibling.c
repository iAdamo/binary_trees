#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node.
 * @node: The node to find sibling for.
 * Return: A pointer to sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
