/*
 * File: 0-memset.c
 * Auth: Dylan Alberto Solis Martin (Bimbsy)
 */

#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed to by pointer s
 *           with the constant byte b.
 * @s: pointer to the memory area to be filled.
 * @b: the character to fill the memory with.
 * @n: the number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area.
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
