#include "main.h"

/**
 *_strcat - concatinate 2 strings.
 *@dest: first string.
 *@src: second string.
 *Return: string.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int c = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		j++;
	}

	for (c = 0; c < (j + i); c++)
	{
		dest[i + c] = src[c];
	}

	dest[j + i] = '\0';
	return (dest);
}
