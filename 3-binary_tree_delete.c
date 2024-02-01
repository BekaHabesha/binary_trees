/*
 * File_name: 3-binary_tree_delete.c
 * Task_no: 3
 * Task_Title: 3. Delete
 * Functions: void binary_tree_delete.
 * Created: On January 31, 2024
 * Author: Bereket Dereje Mekonnen
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */

#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree.
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @tree: A pointer to the root node of
 *        the tree to delete.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
