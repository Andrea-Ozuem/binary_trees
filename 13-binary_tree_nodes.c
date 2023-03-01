#include "binary_trees.h"

/**
  *binary_tree_nodes - counts the nodes with at least one child
  *@tree: tree
  *Return: no nodes with least one child
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		count++;
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (count);
}
