#include "binary_trees.h"

/**
  *binary_tree_balance - measures the balance factor of a binary tree
  *@tree: pointer to the root node of the tree to measure the balance factor
  *Return: the balance factor
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (max_left - max_right);
}
