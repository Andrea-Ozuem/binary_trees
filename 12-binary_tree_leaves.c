#include "binary_trees.h"

/**
  *binary_tree_leaves - counts the leaves  of a binary tree
  *@tree: tree
  *Return: no leaves of tree
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (++count);
	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);
	return (count);
}
