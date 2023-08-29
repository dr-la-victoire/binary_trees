#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: ptr to the parent of the new node
 * @value: the value to be inserted
 *
 * Return: ptr to the created node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = binary_tree_node(parent, value);
	/* checking if parent is empty */
	if (parent == NULL)
	{
		free(newNode);
		return (NULL);
	}

	/* checking if parent->left is not empty */
	if (parent->left)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	/* assigning parent->left to newNode */
	parent->left = newNode;

	return (newNode);
}
