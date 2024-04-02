#include "binary_trees.h"

/**
 * tree_height - Function measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 * Return: The height, if tree is NULL, it must return 0.
 */

size_t tree_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = tree_height(tree->left) + 1;
	right_height = tree_height(tree->right) + 1;

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}


/**
 * binary_tree_balance - Function that measures the balance
 * factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the
 * balance factor.
 * Return: The balance factor, if tree is NULL, it must return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		int left_height = (int)tree_height(tree->left);
		int right_height = (int)tree_height(tree->right);

		return (left_height - right_height);
	}
}

