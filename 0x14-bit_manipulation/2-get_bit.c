#include "main.h"

/**
 * get_bit - Target the bit of a number at the index position.
 * @n: Given number.
 * @index: Given index.
 * Return: Positive number if success (0,1) or -1 if it fails.
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
