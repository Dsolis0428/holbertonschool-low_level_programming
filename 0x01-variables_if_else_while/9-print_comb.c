/*
 * File: 9-print_comb.c
 * Auth: Dylan Alberto Solis Martin(Bimbsy)
 */

#include <stdio.h>

/**
 * main - Prints all posible combinations of single-digit numbers.
 *        numbers are seperated by ',' and followed by a space.
 *        Numbers printed in ascending order using putchar.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		putchar(digit);
		if (digit == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}

