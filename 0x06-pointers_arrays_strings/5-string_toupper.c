/*
 * File: 5-string_toupper.c
 * Auth: Dylan Alberto Solis Martin (Bimbsy)
 */

#include "main.h"

/**
 *string_toupper - changes all lowercase letters string to uppercase.
 *@s: pointer to string to modify.
 *
 *Return: Pointer to the modified string.
 */

char *string_toupper(char *s)
{
	int index = 0;

	while (s[index])
	{
		if (s[index] > 'a' && s[index] < 'z')
		{
			s[index] -= 32;
		}
		index++;
	}

	return (s);
}
