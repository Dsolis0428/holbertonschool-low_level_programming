/*
 * File: 2-strchr.c
 * Auth: Dylan Alberto Solis Martin (Bimbsy)
 */

#include "main.h"

/**
 * _strchr - Find the first occurence of a char.
 * @c: Pointer to the char to be found.
 * @s: Pointer to the string to search in.
 * Return: A pointer to the first occurence of char c in s or NULL.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			break;
		i++;
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (0);
}
