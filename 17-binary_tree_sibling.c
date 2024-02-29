#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node.
 *@node: points to the node to find the sibling.
 * Return: points to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);

}
