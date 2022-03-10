#include "function_pointers.h"
/**
 * array_iterator - Call for another function for each element of an array.
 * @array: Array address.
 * @size: Array size.
 * @action: Function address.
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		for ( i; i < size; i++)
			action(array[i]);
	}
}

