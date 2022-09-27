/*
 * File: 2-strncpy.c
 * Auth: Dylan Alberto Solis Martin
 */

#include "main.h"


/**
 *_strncpy - copy src into dest.
 *@dest: first string.
 *@src: second string.
 *@n: the number of bytes to use from src.
 *Return: string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_length = 0;

	while (src[index++])
	{
		src_length++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (index = src_length; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
