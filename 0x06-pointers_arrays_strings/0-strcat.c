#include "main.h"

/**
 * _strcat - connect two seperate strings.
 *
 * @dest: destination string.
 * @src: source string.
 * 
 * Return: pointer of the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
