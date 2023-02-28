#include "binary_trees.h"

/**
  *binary_tree_insert_left - inserts a node as the left-child of another node
  *@parent: parent node
  *@value: n va;l
  *Return: node created
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = binary_tree_node(parent, value);
	if (parent->left)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;

	return (node);
}
