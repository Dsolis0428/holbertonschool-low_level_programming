#include "main.h"

/**
 *_memset - insert n times the content of b into s.
 *@s: pointer to memory of are being files.
 *@b: the string to insert.
 *@n: number of time to insert.
 *Return: pointer s.
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
