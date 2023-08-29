#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: ptr to the node to find the uncle
 * Return: ptr to uncle node or NULL
 *
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* check if node is null */
	if (!node)
		return (NULL);
	/* check if node has no parent */
	if (!node->parent)
		return (NULL);
	/* check if parent has no sibling */
	if (!node->parent->left || !node->parent->right)
		return (NULL);
	if (!node->parent->parent)
		return (NULL);
	/* get the sibling of the parent */
	if (node != node->parent->left)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
