#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node
 * @node: node
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandp = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	grandp = node->parent->parent;
	if (grandp == NULL)
		return (NULL);

	if (grandp->left == node->parent)
		return (grandp->right);

	return (grandp->left);
}
