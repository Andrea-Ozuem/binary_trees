#include "binary_trees.h"

/**
  *binary_tree_delete - deletes an entire binary tree
  *@tree: tree to be deleted
  */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			free(tree);
			return;
		}
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
