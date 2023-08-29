#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: ptr to the node
 *
 * Return: ptr to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (!node->parent->left || !node->parent->right)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
