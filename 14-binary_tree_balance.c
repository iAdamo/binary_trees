#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a
 * binary tree.
 * @tree: Pointer to root node to calculate balance factor.
 * Return: The balance factor of the tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (left_height - right_height);
}

/**
 * binary_tree_height - gets the height of a binary tree
 * @tree: root node to draw height from for tree
 * Return: size_t representing height, 0 on failure or NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;

	if (!tree)
		return (0);

	left_size += 1 + binary_tree_height(tree->left);
	right_size += 1 + binary_tree_height(tree->right);
	if (left_size > right_size)
		return (left_size);

	return (right_size);
}
