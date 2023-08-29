#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses through a binary tree with preorder method
 * @tree: ptr to the root node of the tree to be traversed
 * @func: ptr to function to call for each node
 *
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
