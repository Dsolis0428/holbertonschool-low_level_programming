include "main.h"

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
	int i=0;
	int j;

	while (dest[i])
	{
		i++;
	}

	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	
	dest[dlen] = '\0';
	return (dest);
}