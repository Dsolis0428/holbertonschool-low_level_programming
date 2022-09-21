/*
 * File: 100-atoi.c
 * Auth: Dylan Alberto Solis Martin (Bimbsy)
 */

#include "main.h"

/**
 * _atoi - Converts a string into a integer.
 * @s: pointer to string to be converted.
 * Return: If string contains no numbers must return 0.
 */
int _atoi(char *s)
{
	int result = 0, sign = 1, index = 0;

	if (s[0] == '-')
	{
		sign = -1;
		index++;
	}
	for (index; str[index] != '\0'; index++)
	{
		result = reslut * 10 + s[index] - '0';
	}
	return(sign * result);
}

