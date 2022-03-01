#include "main.h"
#include <stdlib.h>
/**
 *create_array - allocate an array.
 *@size: size of arrray.
 *@c: char.
 *Return: pointer to char if success.
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int index;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		ar[index] = c;

	return (ar);
}
