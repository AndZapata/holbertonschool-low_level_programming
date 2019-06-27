#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bitonic_sort(int *array, size_t size);
void bubble_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
int Lomuto(int *a, int l, int r, size_t size);
size_t maximum(int *array, int size);
void merge_sort(int *array, size_t size);
void partition(int *array, int *buf, size_t first, size_t last);
void print(int *, int *, size_t, size_t, size_t, size_t);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void quick_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void radix_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);

#endif /* SORT_H */
