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

	/* checking if parent has a value */
	if (parent == NULL)
		return (NULL);
	/* creating the left node */
	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = value;
	newNode->right = NULL;
	newNode->parent = parent;
	newNode->left = parent->left;
	/* checking if parent->left is not empty */
	if (newNode->left != NULL)
	{
		newNode->left->parent = newNode;
	}
	return (newNode);
}
