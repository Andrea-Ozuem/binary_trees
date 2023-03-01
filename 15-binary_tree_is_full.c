#include "binary_trees.h"

/**
  *binary_tree_is_full - checks if a binary tree is full
  *@tree: tree to be checked
  *Return: 0 as false otherwise true
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 0;
/*	int full, left, right;*/

/*	left = right = full = 0;*/

	if (!tree)
		return (0);
	if ((tree->left && tree->right) || (!tree->left && !tree->right))
	{
		full = 1;
		if (tree->left)
		{
			full = binary_tree_is_full(tree->left);
				if (!full)
					return (full);
		}
		if (tree->right)
			full = binary_tree_is_full(tree->right);
	}
	return (full);
}
