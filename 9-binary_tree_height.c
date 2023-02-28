#include "binary_trees.h"

/**
  *binary_tree_height - measures the height of a binary tree
  *@tree: tree
  *Return: height of tree
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (!tree)
		return (0);
	else
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
		if (left >= right)
			return (left + 1);
		return (right + 1);
	}
}
