#include "main.h"

/**
 * _strlen - Returns length of a string.
 * @str: string to get length from.
 *
 * Return: The length of @str.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
