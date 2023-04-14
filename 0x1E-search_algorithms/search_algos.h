#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*
 * Function that searches for a value in an
 * array of integers using the Linear search algorithm
 */
int linear_search(int *array, size_t size, int value);

/*
 * Function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 */
int binary_search(int *array, size_t size, int value);

/*
 * Function that searches for a value in a
 * sorted array of integers using the Jump search algorithm
 */
int jump_search(int *array, size_t size, int value);

/*
 * Function that searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 */
int interpolation_search(int *array, size_t size, int value);

/*
 * Function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 */
int exponential_search(int *array, size_t size, int value);

/*
 * Function that helps an `advanced_binary`, to 
 * recursively search for a value in an integer array
 */
int advanced_binary(int *array, size_t size, int value);

/*
 * Function that searches for a value in a sorted list
 * of integers using the Jump search algorithm in a singly linked list
 */
listint_t *jump_list(listint_t *list, size_t size, int value);

 /* print_list - Prints the content of a listint_t */
void print_list(const listint_t *list);

/* create_list - Creates a single linked list */
listint_t *create_list(int *array, size_t size);

/* free_list - Deallocates a singly linked list */
void free_list(listint_t *list);

/* linear_skip - searches for a value conatined in a skip list */
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* SEARCH_ALGOS_H */
