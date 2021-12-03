#include "binary_trees.h"

bst_t *array_to_bst(int *array, size_t size)
{
size_t cont = 0;
bst_t *root;

root = NULL;
for (cont = 0; cont < size; cont++)
bst_insert(&root, array[cont]);
return (root);
}
