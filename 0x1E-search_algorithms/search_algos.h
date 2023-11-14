#ifndef _search_algos_
#define _search_algos_

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;
listint_t *jump_list(listint_t *list, size_t size, int value);

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t l, size_t r);
int binary_search_index(int *array, size_t l, size_t r, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif /* _search_algos_ */
