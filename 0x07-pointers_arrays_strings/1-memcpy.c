/*
 * File: 1-memcpy.c
 * Auth: Dylan Alberto Solis Martin
 */

#include "main.h"

/**
 * _memcpy - copy n bytes from src to dest.
 * @dest: Pointer to the string to copy into it.
 * @src: Pointer to the string to copy from.
 * @n: The number of bytes to copy.
 * Return: Pointer dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}
