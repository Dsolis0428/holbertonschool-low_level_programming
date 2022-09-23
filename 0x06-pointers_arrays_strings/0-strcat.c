/*
 * File: 0-strcat.c
 * Auth: Dylan ALberto Solis Martin (Bimbsy)
 */

#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer to address of string, where second string is being added.
 * @src: pointer to address of string being added to first string.
 * Return: Pointer dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, end_of_dest = 0;

	while (dest[index++])
	{
		end_of_dest++;
	}
	for (index = 0; src[index]; index++)
	{
		dest[end_of_dest++] = src[index];
	}
	return (dest);
}
