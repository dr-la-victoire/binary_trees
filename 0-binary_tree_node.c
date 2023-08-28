#include "binary_trees.h"

/**
 * binary_tree_node - creates a node in a binary tree
 * @parent: ptr to the parent node
 * @value: the value to be inserted
 *
 * Return: the address of the new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->n = value;
	newNode->parent = parent;

	return (newNode);
}
