/*
 * File: 4-rev_array.c
 * Auth: Dylan Alberto Solis Martin (Bimbsy)
 */

#include "main.h"

/**
 *reverse_array - reverse an array.
 *@a: Pointer to an array.
 *@n: Length of array.
 */

void reverse_array(int *a, int n)
{
	int index, index_end, holder;

	index_end = n - 1;
	for (index = 0; index < n / 2; index++)
	{
		holder = a[index];
		a[index] = a[index_end];
		a[index_end] = holder;
		index_end--;
	}
}
