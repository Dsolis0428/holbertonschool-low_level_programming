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
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s - '0');
		}
		else if (num > 0)
		{
			break;
		}

	} while (*s++);

	return (num * sign);
}
