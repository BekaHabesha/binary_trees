/*
 * File_name: 131-heap_insert.c
 * Task_no: 37
 * Task_Title: 37. Heap-Insert
 * Functions: heap_t *heap_insert,
 *            size_t binary_tree_size.
 * Created: On January 31, 2024
 * Author: Bereket Dereje Mekonnen
 * GitHub repository: binary_trees
 * Project Title: 0x1D. C - Binary trees
 * Directory: binary_trees
 */


#include "binary_trees.h"

/**
 * heap_insert - inserts a value in
 *               Max Binary Heap
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @root: a double pointer to the root node
 *        of the Heap to insert the value
 *
 * @value: the value to store in the node
 *         to be inserted
 *
 * Return: a pointer to the created node
 *         NULL on failure
 */

heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *tree, *new, *flip;
	int size, leaves, sub, bit, level, tmp;

	if (!root)
		return (NULL);
	if (!(*root))
		return (*root = binary_tree_node(NULL, value));
	tree = *root;
	size = binary_tree_size(tree);
	leaves = size;
	for (level = 0, sub = 1; leaves >= sub; sub *= 2, level++)
		leaves -= sub;

	/* subtract all nodes */

	for (bit = 1 << (level - 1); bit != 1; bit >>= 1)
		tree = leaves & bit ? tree->right : tree->left;

	new = binary_tree_node(tree, value);
	leaves & 1 ? (tree->right = new) : (tree->left = new);

	flip = new;
	for (; flip->parent && (flip->n > flip->parent->n); flip = flip->parent)
	{
		tmp = flip->n;
		flip->n = flip->parent->n;
		flip->parent->n = tmp;
		new = new->parent;
	}


	/* until parent value exceeds new value */

	return (new);
}


/**
 * binary_tree_size - measures the size of
 *                    a binary tree
 *
 * Author: Bereket Dereje Mekonnen.
 *
 * @tree: tree to measure the size of
 *
 * Return: size of the tree
 *         0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}