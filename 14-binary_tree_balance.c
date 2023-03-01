#include "binary_trees.h"
#include <stdio.h>
/**
  *binary_tree_balance - measures the balance factor of a binary tree
  *@tree: pointer to the root node of the tree to measure the balance factor
  *Return: the balance factor
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left++;
	if (tree->right)
		right++;
	left += binary_tree_height(tree->left);
	right += binary_tree_height(tree->right);
	return (left - right);
}

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
