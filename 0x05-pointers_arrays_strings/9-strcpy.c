#include "main.h"

/**
 * _strcpy - copies string pointed to by src to buffer pointed to by dest
 * @src: source to copy
 * @dest: destination of copy
 *
 * Return: pointer to dest
 */

 char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
