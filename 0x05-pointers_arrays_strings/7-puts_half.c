/*
 * File: 7-puts_half.c
 * Auth: Dylan Alberto Solis Martin (Bimbsy)
 */

#include "main.h"

/**
 * puts_half -  prints half of a string, followed by a new line.
 * @str: pointer to string to be used:
 */
void puts_half(char *str)
{
	int length = 0, index = 0;

	while (str[index++])
	{
		length++;
	}
	if ((length % 2 == 0)
	{
		for (index = length / 2; index < length; index++)
		{
			_putchar(str[index]);
		}
	}
	else
	{
		for (index = (length - 1) / 2; index < length; index++)
		{
			_putchar(str[index]);
		}
	}
	_putchar('\n');
}
