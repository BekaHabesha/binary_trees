# $$\mathbb{\color{teal}\Huge\ {README.md} \ \color{Green}{FILE}}$$
## 🔢0️⃣1️⃣2️⃣3️⃣4️⃣ $\mathbb{\color{green}\Huge\ {0x1D.C-} \ \color{teal}{Binary\ Trees}\}$ 5️⃣6️⃣7️⃣8️⃣9️⃣🔢

<p align="center">
  <img src="https://i.ibb.co/pdr6YMm/0x1-D-C-Binary-trees-Alx-logo.png" />
</p>

### [*0x1D. C - Binary trees*](https://intranet.alxswe.com/projects/270) *is a project to be done in teams of 2 people or alone (solo)*
* ***Done by:*** ***Bereket Dereje Mekonnen***

<p align="center">
  <img src="https://learnloner.com/wp-content/uploads/2023/04/10-1.png" />
  <img src="https://res.cloudinary.com/practicaldev/image/fetch/s--od-naD9n--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://miro.medium.com/max/975/1%2APWJiwTxRdQy8A_Y0hAv5Eg.png" />
</p>

###

* **File_name:📋** 📖 [**README.md**](https://github.com/BekaHabesha/binary_trees/blob/master/README.md) **File**
* **Created: 📅** <ins>**On January 31, 2024**</ins>🕙
* **Author:🖊️** 👨🏻‍💻 [***Bereket Dereje Mekonnen***](https://intranet.alxswe.com/users/BereketDerejeMekonnen) 🧑‍💻
* **Project Title: 🔠**  💻 [**0x1D. C - Binary trees**](https://intranet.alxswe.com/projects/270) 📝🔡
* **GitHub repository: 📦** 📀 [**binary_trees**](https://github.com/BekaHabesha/binary_trees) 💼
* **Project Tasks: 📚** <ins>**Mandatory💯 and Advanced ⁉️**</ins>
* **Tasks in number: 🔢** <ins>**42 Tasks (19-Mandatory & 23-Advanced)**</ins>
* **Mandatory_Tasks:** 💯 <ins>**From Task 0 to 18**</ins> 💯
* **Advanced_Tasks:** ⁉️ <ins>**From Task 19 to 41**</ins> ♨️

###

<p align="center">
  <img src="https://dz2cdn1.dzone.com/storage/temp/13820661-1596719409020.png" />
</p>

##

## <ins>**PROJECT_TITLE</ins>: 🔠**  💻 [**0x1D. C - Binary trees**](https://intranet.alxswe.com/projects/270) 📝🔡

## <ins>**GITHUB_REPOSITORY</ins>: 📦** 📀 [**binary_trees**](https://github.com/BekaHabesha/binary_trees) 💼

### 

<p align="center">
<img src="https://d14b9ctw0m6fid.cloudfront.net/ugblog/wp-content/uploads/2020/09/Picture1-1.jpg" />
</p>

###

<H1> 📚<ins>Project Files</ins>📑 </H1>

<H2> 🪜<ins>Helper Files</ins> 📜 </H2>

* [**binary_tree_print.c**](./binary_tree_print.c) : is a C function that prints a binary trees.
  * It prints a binary trees in a pretty way

###

<H2> 📮<ins>Header Files</ins> 🗒 </H2>

* [**binary_trees.h**](./binary_trees.h) : is a Header file containing definitions and prototypes for all types and functions written for the project.

###

<H2> 📮<ins>Data Structures</ins> 🗒 </H2>

* **use the following data structures and types for binary trees. Don’t forget to include them in your header file.**

#### Basic Binary Tree

```js
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

#### Basic Search Tree

```js
typedef struct binary_tree_s bst_t;
```

#### AVL Tree

```js
typedef struct binary_tree_s avl_t;
```

#### Max Binary Heap

```js
typedef struct binary_tree_s heap_t;
```

<p align="center">
<img src="https://miro.medium.com/v2/resize:fit:16000/1*CMGFtehu01ZEBgzHG71sMg.png" />
</p>

###

<H1> 📔<ins>Function Prototypes:</ins> 📱</H1>

| <H3 align="center">Task NO.</H3> | <H3 align="center">Title</H3> | <H3 align="center">File</H3> | <H3 align="center">Prototype</H3> |
| :----: | :----:| :---- | :---- |
|   |   |   |   |
|   |   |   |   |
|   | <H3 align="center">Helper</H3> |  |  |
|   |   |   |   |
|   |   |   |   |
| **🌍** | **Print Array** | [**binary_tree_print.c**](./binary_tree_print.c) | [**void binary_tree_print(const binary_tree_t *tree)**](./binary_tree_print.c) |
|   |   |   |   |
|   |   |   |   |
|   |   | <H3 align="center">MANDATORY TASKS</H3>  |  |
|   |   |   |   |
|   |   |   |   |
| **0** | **New<br>node** | [**0-binary_tree_node.c**](./0-binary_tree_node.c) | [**binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);**](./0-binary_tree_node.c) |
| **1** | **Insert<br>left** | [**1-binary_tree_insert_left.c**](./1-binary_tree_insert_left.c) | [**binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);**](./1-binary_tree_insert_left.c) |
| **2** | **Insert<br>right** | [**2-binary_tree_insert_right.c**](./2-binary_tree_insert_right.c) | [**binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);**](./2-binary_tree_insert_right.c) |
| **3** | **Delete** | [**3-binary_tree_delete.c**](./3-binary_tree_delete.c) | [**void binary_tree_delete(binary_tree_t *tree);**](./3-binary_tree_delete.c) |
| **4** | **Is<br>leaf** | [**4-binary_tree_is_leaf.c**](./4-binary_tree_is_leaf.c) | [**int binary_tree_is_leaf(const binary_tree_t *node);**](./4-binary_tree_is_leaf.c) |
| **5** | **Is<br>root** | [**5-binary_tree_is_root.c**](./5-binary_tree_is_root.c) | [**int binary_tree_is_root(const binary_tree_t *node);**](./5-binary_tree_is_root.c) |
| **6** | **Pre-order<br>traversal** | [**6-binary_tree_preorder.c**](./6-binary_tree_preorder.c) | [**void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));**](./6-binary_tree_preorder.c) |
| **7** | **In-order<br>traversal** | [**7-binary_tree_inorder.c**](./7-binary_tree_inorder.c) | [**void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));**](./7-binary_tree_inorder.c) |
| **8** | **Post-order<br>traversal** | [**8-binary_tree_postorder.c**](./8-binary_tree_postorder.c) | [**void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));**](./8-binary_tree_postorder.c) |
| **9** | **Height** | [**9-binary_tree_height.c**](./9-binary_tree_height.c) | [**size_t binary_tree_height(const binary_tree_t *tree);**](./9-binary_tree_height.c) |
| **10** | **Depth** | [**10-binary_tree_depth.c**](./10-binary_tree_depth.c) | [**size_t binary_tree_depth(const binary_tree_t *tree);**](./10-binary_tree_depth.c) |
| **11** | **Size** | [**11-binary_tree_size.c**](./11-binary_tree_size.c) | [**size_t binary_tree_size(const binary_tree_t *tree);**](./11-binary_tree_size.c) |
| **12** | **Leaves** | [**12-binary_tree_leaves.c**](./12-binary_tree_leaves.c) | [**size_t binary_tree_leaves(const binary_tree_t *tree);**](./12-binary_tree_leaves.c) |
| **13** | **Nodes** | [**13-binary_tree_nodes.c**](./13-binary_tree_nodes.c) | [**size_t binary_tree_nodes(const binary_tree_t *tree);**](./13-binary_tree_nodes.c) |
| **14** | **Balance<br>factor** | [**14-binary_tree_balance.c**](./14-binary_tree_balance.c) | [**int binary_tree_balance(const binary_tree_t *tree);**](./14-binary_tree_balance.c) |
| **15** | **Is<br>full** | [**15-binary_tree_is_full.c**](./15-binary_tree_is_full.c) | [**int binary_tree_is_full(const binary_tree_t *tree);**](./15-binary_tree_is_full.c) |
| **16** | **Is<br>perfect** | [**16-binary_tree_is_perfect.c**](./16-binary_tree_is_perfect.c) | [**int binary_tree_is_perfect(const binary_tree_t *tree);**](./16-binary_tree_is_perfect.c) |
| **17** | **Sibling** | [**17-binary_tree_sibling.c**](./17-binary_tree_sibling.c) | [**binary_tree_t *binary_tree_sibling(binary_tree_t *node);**](./17-binary_tree_sibling.c) |
| **18** | **Uncle** | [**18-binary_tree_uncle.c**](./18-binary_tree_uncle.c) | [**binary_tree_t *binary_tree_uncle(binary_tree_t *node);**](./18-binary_tree_uncle.c) |
|   |   |   |   |
|   |   |   |   |
|   |   | <H3 align="center">ADVANCED TASKS</H3>  |  |
|   |   |   |  |
|   |   |   |  |
| **19** | **Lowest<br>common<br>ancestor** | [**100-binary_trees_ancestor.c**](./100-binary_trees_ancestor.c) | [**binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);**](./100-binary_trees_ancestor.c) |
| **20** | **Level<br>-order<br>traversal** | [**101-binary_tree_levelorder.c**](./101-binary_tree_levelorder.c) | [**void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));**](./101-binary_tree_levelorder.c) |
| **21** | **Is<br>complete** | [**102-binary_tree_is_complete.c**](./102-binary_tree_is_complete.c) | [**int binary_tree_is_complete(const binary_tree_t *tree);**](./102-binary_tree_is_complete.c) |
| **22** | **Rotate<br>left** | [**103-binary_tree_rotate_left.c**](./103-binary_tree_rotate_left.c) | [**binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);**](./103-binary_tree_rotate_left.c) |
| **23** | **Rotate<br>right** | [**104-binary_tree_rotate_right.c**](./104-binary_tree_rotate_right.c) | [**binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);**](./104-binary_tree_rotate_right.c) |
| **24** | **Is<br>BST** | [**110-binary_tree_is_bst.c**](./110-binary_tree_is_bst.c) | [**int binary_tree_is_bst(const binary_tree_t *tree);**](./110-binary_tree_is_bst.c) |
| **25** | **BST<br>-<br>Insert** | [**111-bst_insert.c**](./111-bst_insert.c) | [**bst_t *bst_insert(bst_t** __**tree, int value);__](./111-bst_insert.c) |
| **26** | **BST<br>-Array<br>to BST** | [**112-array_to_bst.c**](./112-array_to_bst.c) | [**bst_t *array_to_bst(int *array, size_t size);**](./112-array_to_bst.c) |
| **27** | **BST<br>-<br>Search** | [**113-bst_search.c**](./113-bst_search.c) | [**bst_t *bst_search(const bst_t *tree, int value);**](./113-bst_search.c) |
| **28** | **BST<br>-<br>Remove** | [**114-bst_remove.c**](./114-bst_remove.c) | [**bst_t *bst_remove(bst_t *root, int value);**](./114-bst_remove.c) |
| **29** | **Big<br>O<br>#BST** | [**115-O**](./115-O) |  |
| **30** | **Is<br>AVL** | [**120-binary_tree_is_avl.c**](./120-binary_tree_is_avl.c) | [**int binary_tree_is_avl(const binary_tree_t *tree);**](./120-binary_tree_is_avl.c) |
| **31** | **AVL<br>-<br>Insert** | [**121-avl_insert.c**](./121-avl_insert.c) | [**avl_t *avl_insert(avl_t** __**tree, int value);__](./121-avl_insert.c) |
| **32** | **AVL<br>-Array<br>to AVL** | [**122-array_to_avl.c**](./122-array_to_avl.c) | [**avl_t *array_to_avl(int *array, size_t size);**](./122-array_to_avl.c) |
| **33** | **AVL<br>-<br>Remove** | [**123-avl_remove.c**](./123-avl_remove.c) | [**avl_t *avl_remove(avl_t *root, int value);**](./123-avl_remove.c) |
| **34** | **AVL<br>-From<br>sorted<br>array** | [**124-sorted_array_to_avl.c**](./124-sorted_array_to_avl.c) | [**avl_t *sorted_array_to_avl(int *array, size_t size);**](./124-sorted_array_to_avl.c) |
| **35** | **Big<br>O #AVL<br>Tree** | [**125-O**](./125-O) |  |
| **36** | **Is<br>Binary<br>heap** | [**130-binary_tree_is_heap.c**](./130-binary_tree_is_heap.c) | [**int binary_tree_is_heap(const binary_tree_t *tree);**](./130-binary_tree_is_heap.c) |
| **37** | **Heap<br>-<br>Insert** | [**131-heap_insert.c**](./131-heap_insert.c) | [**heap_t *heap_insert(heap_t** __**root, int value);__](./131-heap_insert.c) |
| **38** | **Heap<br>- Array<br>to<br>Binary<br>Heap** | [**132-array_to_heap.c**](./132-array_to_heap.c) | [**heap_t *array_to_heap(int *array, size_t size);**](./132-array_to_heap.c) |
| **39** | **Heap<br>-<br>Extract** | [**133-heap_extract.c**](./133-heap_extract.c) | [**int heap_extract(heap_t** __**root);__](./133-heap_extract.c) |
| **40** | **Heap<br>-<br>Sort** | [**134-heap_to_sorted_array.c**](./134-heap_to_sorted_array.c) | [**int *heap_to_sorted_array(heap_t *heap, size_t *size);**](./134-heap_to_sorted_array.c) |
| **41** | **Big O<br>#Binary<br>Heap** | [**135-O**](./135-O) |   |
|   |   |   |   |
|   |   |   |   |
<p align="center">
  <img src="https://storage.googleapis.com/algodailyrandomassets/curriculum/trees/balanced-binary-tree-example1.png" />
</p>

####

<H2> 💎🕰<ins>The big O notations of the time complexity:</ins> ⌚️💼</H2>

| <H3 align="center">Task NO.</H3> | <H3 align="center">Title</H3> | <H3 align="center">big O File</H3> | <H3 align="center"> time complexity<br> cases</H3> |
| :----: | :----:| :---- | :---- |
|   |   |   |   |
|   |   |   |   |
|   | <H3 align="center">MANDATORY TASKS</H3> |  |  |
|   |   |   |   |
|   |   |   |  |
| **29** | **Big O #BST** | [**115-O**](./115-O) | 🟢 [**best case**](./115-O)<br> 🟡 [**average case**](./115-O)<br> 🔴 [**worst case**](./115-O) |
| **35** | **Big O #AVL Tree** | [**125-O**](./125-O) | 🟢 [**best case**](./125-O)<br> 🟡 [**average case**](./125-O)<br> 🔴 [**worst case**](./125-O) |
| **41** | **Big O #Binary Heap** | [**135-O**](./135-O) | 🟢 [**best case**](./135-O)<br> 🟡 [**average case**](./135-O)<br> 🔴 [**worst case**](./135-O) |
|   |   |   |   |
|   |   |   |   |

<p align="center">
  <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTu20VNTjtJZE02dXm6XYEib65WYnnLuc9lcg&usqp=CAU" />
</p>

###

<H1> 🗂<ins>Project Test Folder</ins>📁📂 </H1>

* [**tests**](./tests) : Folder is a folder of test folders and files. 
  * There are two Folder inside [**tests**](./tests) folder, this are
    * [**tests-main.c**](./tests/tests-main.c) Folder
    * [**tests-output**](./tests/tests-output) Folder
###

<H2> Tests-main.c Folder 📁 And Files 📋🔖 </H2> 

* [**tests-main.c**](./tests/tests-main.c) Folder is a folder of [**main.c**](./tests/tests-main.c) **files**.
  * [**main.c**](./tests/tests-main.c) **files** are a files we can use them to test our functions.

* Files📚 inside [**tests-main.c**](./tests/tests-main.c) Folder 📂
  * [**0-main.c**](./tests/tests-main.c/0-main.c)
  * [**1-main.c**](./tests/tests-main.c/1-main.c)
  * [**2-main.c**](./tests/tests-main.c/2-main.c)
  * [**3-main.c**](./tests/tests-main.c/3-main.c)
  * [**4-main.c**](./tests/tests-main.c/4-main.c)
  * [**5-main.c**](./tests/tests-main.c/5-main.c)
  * [**6-main.c**](./tests/tests-main.c/6-main.c)
  * [**7-main.c**](./tests/tests-main.c/7-main.c)
  * [**8-main.c**](./tests/tests-main.c/8-main.c)
  * [**9-main.c**](./tests/tests-main.c/9-main.c)
  * [**10-main.c**](./tests/tests-main.c/10-main.c)
  * [**11-main.c**](./tests/tests-main.c/11-main.c)
  * [**12-main.c**](./tests/tests-main.c/12-main.c)
  * [**13-main.c**](./tests/tests-main.c/13-main.c)
  * [**14-main.c**](./tests/tests-main.c/14-main.c)
  * [**15-main.c**](./tests/tests-main.c/15-main.c)
  * [**16-main.c**](./tests/tests-main.c/16-main.c)
  * [**17-main.c**](./tests/tests-main.c/17-main.c)
  * [**18-main.c**](./tests/tests-main.c/18-main.c)
  * [**100-main.c**](./tests/tests-main.c/100-main.c)
  * [**101-main.c**](./tests/tests-main.c/101-main.c)
  * [**102-main.c**](./tests/tests-main.c/102-main.c)
  * [**103-main.c**](./tests/tests-main.c/103-main.c)
  * [**104-main.c**](./tests/tests-main.c/104-main.c)
  * [**110-main.c**](./tests/tests-main.c/110-main.c)
  * [**111-main.c**](./tests/tests-main.c/111-main.c)
  * [**112-main.c**](./tests/tests-main.c/112-main.c)
  * [**113-main.c**](./tests/tests-main.c/113-main.c)
  * [**114-main.c**](./tests/tests-main.c/114-main.c)
  * [**120-main.c**](./tests/tests-main.c/120-main.c)
  * [**121-main.c**](./tests/tests-main.c/121-main.c)
  * [**122-main.c**](./tests/tests-main.c/122-main.c)
  * [**123-main.c**](./tests/tests-main.c/123-main.c)
  * [**124-main.c**](./tests/tests-main.c/124-main.c)
  * [**130-main.c**](./tests/tests-main.c/130-main.c)
  * [**131-main.c**](./tests/tests-main.c/131-main.c)
  * [**132-main.c**](./tests/tests-main.c/132-main.c)
  * [**133-main.c**](./tests/tests-main.c/133-main.c)
  * [**134-main.c**](./tests/tests-main.c/134-main.c)

<p align="center">
  <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRzYSfRTydvTqAEc7MhESiFMuok1-76d0VxTA&usqp=CAU" />
</p>

###

<H2> Tests-Output Folders📂 And Files 📋 🔖</H2> 

* [**tests-output**](./tests/tests-output) Folder is a folder of [**output**](./tests/tests-output) **files**.
  * [**output**](./tests/tests-output) **files** are a **compiled** files <ins>**output on Ubuntu 20.04 LTS**</ins> Using <ins>**gcc**</ins>, Using the options <ins>**-Wall -Werror -Wextra -pedantic -std=gnu89**</ins> plus using [**tests-main.c**](./tests/tests-main.c) **files**.

* Files📚 inside [**tests-output**](./tests/tests-output) Folder 📂 are 
  * [**0-node**](./tests/tests-output/0-node)
  * [**1-left**](./tests/tests-output/1-left)
  * [**2-right**](./tests/tests-output/2-right)
  * [**3-del**](./tests/tests-output/3-del)
  * [**4-leaf**](./tests/tests-output/4-leaf)
  * [**5-root**](./tests/tests-output/5-root)
  * [**6-pre**](./tests/tests-output/6-pre)
  * [**7-in**](./tests/tests-output/7-in)
  * [**8-post**](./tests/tests-output/8-post)
  * [**9-height**](./tests/tests-output/9-height)
  * [**10-depth**](./tests/tests-output/10-depth)
  * [**11-size**](./tests/tests-output/11-size)
  * [**12-leaves**](./tests/tests-output/12-leaves)
  * [**13-nodes**](./tests/tests-output/13-nodes)
  * [**14-balance**](./tests/tests-output/14-balance)
  * [**15-full**](./tests/tests-output/15-full)
  * [**16-perfect**](./tests/tests-output/16-perfect)
  * [**17-sibling**](./tests/tests-output/17-sibling)
  * [**18-uncle**](./tests/tests-output/18-uncle)
  * [**100-ancestor**](./tests/tests-output/100-ancestor)
  * [**101-lvl**](./tests/tests-output/101-lvl)
  * [**102-complete**](./tests/tests-output/102-complete)
  * [**103-rotl**](./tests/tests-output/103-rotl)
  * [**104-rotr**](./tests/tests-output/104-rotr)
  * [**110-is_bst**](./tests/tests-output/110-is_bst)
  * [**111-bst_insert**](./tests/tests-output/111-bst_insert)
  * [**112-bst_array**](./tests/tests-output/112-bst_array)
  * [**113-bst_search**](./tests/tests-output/113-bst_search)
  * [**114-bst_rm**](./tests/tests-output/114-bst_rm)
  * [**120-is_avl**](./tests/tests-output/120-is_avl)
  * [**121-avl_insert**](./tests/tests-output/121-avl_insert)
  * [**122-avl_array**](./tests/tests-output/122-avl_array)
  * [**123-avl_rm**](./tests/tests-output/123-avl_rm)
  * [**124-avl_sorted**](./tests/tests-output/124-avl_sorted)
  * [**130-is_heap**](./tests/tests-output/130-is_heap)
  * [**131-heap_insert**](./tests/tests-output/131-heap_insert)
  * [**132-heap_array**](./tests/tests-output/132-heap_array)
  * [**133-heap_extract**](./tests/tests-output/133-heap_extract)
  * [**134-heap_sort**](./tests/tests-output/134-heap_sort)

<p align="center">
  <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSAIRM5MXEQrPVPUdbmVAiqiEoUabbDRkCAQg&usqp=CAU" />
</p>

##

<h1 align="center"> 📍 <ins>Resources</ins> 📌 :floppy_disk:</H1>

### **Read 📖 or watch🎞:** 🔖
* [**Binary tree**](https://intranet.alxswe.com/rltoken/1F2x42-8vUbOmU4L1C1KMg) (note the first line: ${{\color{red}{\textsf{ Not to be confused with B-tree.\ \}}}}\$ )
* [**Data Structure and Algorithms - Tree**](https://intranet.alxswe.com/rltoken/QmcTMCkQyrgMjrqoWxYdhw)
* [**Tree Traversal**](https://intranet.alxswe.com/rltoken/z6ZaXr_RxwE5nTHAUx_dfQ)
* [**Binary Search Tree**](https://intranet.alxswe.com/rltoken/qO5dBlMnYJzbaWG3xVpcnQ)
* [**Data structures: Binary Tree**](https://intranet.alxswe.com/rltoken/BeyJ2gjlE7_djwRiDyeHig)

<p align="center">
  <img src="https://image.slidesharecdn.com/1-150507090843-lva1-app6891/85/11-binary-tree-2-320.jpg?cb=1665729451" />
  <img src="https://d14b9ctw0m6fid.cloudfront.net/ugblog/wp-content/uploads/2020/09/introduction-to-binary-trees-1.png" />
  <img src="https://hideoushumpbackfreak.com/algorithms/images/binary_tree_delete_two_child.png" />
</p>

###

<H1 align="center">📝 <ins>Learning Objectives</ins> 🔖 :floppy_disk:</H1>

* At the end of this project, You are expected to be able to [**explain to anyone**](https://intranet.alxswe.com/rltoken/rDjGcLNoVZsZG1Br0UbX6A), **Without the help of Google:**

<p align="center">
  <img src="https://i.ibb.co/VLNRkLS/final-the-feynman-technique.png" />
</p>

###

<H2> 🖇️ <ins>General Learning Objectives</ins> 🪜 :heavy_check_mark:</H2>

* **What is a binary tree**
* **What is the difference between a binary tree and a Binary Search Tree**
* **What is the possible gain in terms of time complexity compared to linked lists**
* **What are the depth, the height, the size of a binary tree**
* **What are the different traversal methods to go through a binary tree**
* **What is a complete, a full, a perfect, a balanced binary tree**

<p align="center">
  <img src="https://examradar.com/wp-content/uploads/2016/10/Figure-5.2.7.-Linked-representation-for-the-binary-tree.png?x50549" />
</p>

###

<H2> ⛔ <ins>Copyright©️- ♻️Plagiarism 🕹</ins> 🚫</H2>

* You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
* You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
* You are not allowed to publish any content of this project.
* Any form of plagiarism is strictly forbidden and will result in removal from the program.

<p align="center">
  <img src="https://i.ibb.co/8csnv7s/Alx-do-hard-things.jpg" />
</p>

##

<H1>🔰 <ins>Requirements</ins> 🛡 :floppy_disk:</H1>

<H2>General Requirements 📋:heavy_check_mark:</H2>

* **Allowed editors:** ${{\color{red}{\textsf{ vi\ \}}}}\$ , ${{\color{red}{\textsf{ vim\ \}}}}\$ , ${{\color{red}{\textsf{ emacs\ \}}}}\$.
* All your files will be **compiled** on <ins>**Ubuntu 20.04 LTS**</ins> Using <ins>**gcc**</ins>, Using the options <ins>**-Wall -Werror -Wextra -pedantic -std=gnu89**</ins>
* All your files should **end with a new line**
* A ${{\color{red}{\textsf{ README.md\ \}}}}\$ <ins>**file**</ins>🧾, at the root of the folder 📂 of the project is mandatory.
* **Your code should use the** ${{\color{red}{\textsf{ Betty\ \}}}}\$ <ins>**style**</ins>. It will be checked using [**betty-style.pl**](https://github.com/alx-tools/Betty/blob/master/betty-style.pl), and [**betty-doc.pl**](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl).
* You are **not allowed to use <ins>global variables</ins>.**
* **No more** than <ins>**5 functions**</ins> per **file.**
* You are **not allowed to use the <ins>standard library</ins>.**
* In the following examples, <ins>**the</ins>** ${{\color{red}{\textsf{ main.c\ \}}}}\$ <ins>**files</ins>** are shown as examples. You can use them to <ins>**test your functions</ins>, but you don’t have to push them to your repo** (if you do we won’t take them into account). We will **use our <ins>own main.c files</ins> at compilation**. <ins>**Our main.c files**</ins> might be different from the one shown in the examples.
* The <ins>**prototypes</ins> of all <ins>your functions**</ins> should be included in your [**header file**](./binary_trees.h) called [**binary_trees.h**](./binary_trees.h)
* **<ins>Don’t forget to push</ins> your** [**header file**](./binary_trees.h) .
* All your <ins>**header files</ins>** should be <ins>**include guarded</ins>**

<p align="center">
  <img src="https://opendatastructures.org/ods-cpp/img4566.png" />
</p>

##

<H1><ins>GitHub</ins> :floppy_disk: ❗️ </H1>

**There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.**

##

<H1><ins>More Info</ins> ℹ️</H1>

<H2>Data structures📌 :heavy_check_mark:</H2>

* **Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.**

<H3>Basic Binary Tree :heavy_check_mark:</H3>

```js
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

<H3>Binary Search Tree :heavy_check_mark:</H3>

```js
typedef struct binary_tree_s bst_t;
```

<H3>AVL Tree :heavy_check_mark:</H3>

```js
typedef struct binary_tree_s avl_t;
```

<H3>Max Binary Heap :heavy_check_mark:</H3>

```js
typedef struct binary_tree_s heap_t;
```

* **Note:** For tasks 0 to 23 (included), you have to deal with simple binary trees. They are not BSTs, thus they don’t follow any kind of rule.

##

<H2>Print function :heavy_check_mark:</H2>

* To match the examples in the tasks, you are given [**this function**](https://github.com/alx-tools/0x1C.c).
  * This function is used only for visualization purposes. You don’t have to push it to your repo. It may not be used during the correction

<p align="center">
  <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcRqy1hWXbw2BWqv-hjYkMzZ1J4JLpmVe37yzVN7LI4VwWLFpSxx45e7zGbe_PakIhNiqh8&usqp=CAU" />
</p>

##

## <ins>**PROJECT_TITLE</ins>: 🔠**  💻 [**0x1D. C - Binary trees**](https://intranet.alxswe.com/projects/270) 📝🔡

## <ins>**GITHUB_REPOSITORY</ins>: 📦** 📀 [**binary_trees**](https://github.com/BekaHabesha/binary_trees) 💼

<p align="center">
  <img src="https://i.ibb.co/y5wmQyd/Alx-enginn-Build-ur-future.png" />
</p>

### 

* **File_name:📋** 📖 [**README.md**](https://github.com/BekaHabesha/binary_trees/blob/master/README.md) **File**
* **Created: 📅** <ins>**On January 31, 2024**</ins>🕙
* **Author:🖊️** 👨🏻‍💻 [***Bereket Dereje Mekonnen***](https://intranet.alxswe.com/users/BereketDerejeMekonnen) 🧑‍💻
* **Project Title: 🔠**  💻 [**0x1D. C - Binary trees**](https://intranet.alxswe.com/projects/270) 📝🔡
* **GitHub repository: 📦** 📀 [**binary_trees**](https://github.com/BekaHabesha/binary_trees) 💼
* **Project Tasks: 📚** <ins>**Mandatory💯 and Advanced ⁉️**</ins>
* **Tasks in number: 🔢** <ins>**42 Tasks (19-Mandatory & 23-Advanced)**</ins>
* **Mandatory_Tasks:** 💯 <ins>**From Task 0 to 18**</ins> 💯
* **Advanced_Tasks:** ⁉️ <ins>**From Task 19 to 41**</ins> ♨️

###
