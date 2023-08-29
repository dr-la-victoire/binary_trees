#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: ptr to the root node
 *
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/* checking if the tree is empty */
	if (tree == NULL)
		return;
	/* using recursion to delete the subtrees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
