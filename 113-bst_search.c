/*
 * File_name: 113-bst_search.c
 * Task_no: 27
 * Task_Title: 27. BST-Search
 * Functions: bst_t *bst_search.
 * Created: On January 31, 2024
 * Author: Bereket Dereje Mekonnen
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */

#include "binary_trees.h"

/**
 * bst_search - Searches for a value in
 *              a binary search tree.
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @tree: A pointer to the root node
 *        of the BST to search.
 *
 * @value: The value to search
 *         for in the BST.
 *
 * Return: If the tree is NULL or
 *         the value is not found, NULL.
 *         Otherwise,
 *         a pointer to the node containing the value.
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
