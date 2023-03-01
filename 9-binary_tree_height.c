#include "binary_trees.h"

/**
  *binary_tree_height - measures the height of a binary tree
  *@tree: tree
  *Return: height of tree
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height, lheight, rheight;

	lheight = rheight = height = 0;
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		height++;

	lheight += binary_tree_height(tree->left);
	rheight += binary_tree_height(tree->right);
	if (lheight >= rheight)
		return (height + lheight);
	return (height + rheight);
}
