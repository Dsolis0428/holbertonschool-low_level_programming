#include "main.h"

/**
 * _strcat - connect two seperate strings.
 *
 * @dest: destination string.
 * @src: source string.
 * 
 * Return: pointer of the resulting string dest
 */

char *strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
