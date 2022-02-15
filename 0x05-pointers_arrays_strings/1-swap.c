#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: 1st interger to be swapped.
 * @b: 2nd interger to be swapped.
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
