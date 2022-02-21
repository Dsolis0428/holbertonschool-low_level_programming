#include "main.h"

/**
 * _memset- fills memory with a constant byte.
 * @s: pointer to area of memory being filled.
 * @b: character to fill memory. 
 * @n: number of times to fill.  
 * 
 */

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}