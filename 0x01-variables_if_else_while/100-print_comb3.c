/*
 * File: 100-print_comb3.c
 * Auth: Dylan Alberto Solis Martin(Bimbsy)
 */

#include <stdio.h>

/**
 * main - Prints all posible combinations of two digits.
 *        The two digits must be diffrent. 01 and 10 are consider the same.
 *        Numbers are seperated by ',' and followed by a space.
 *        Numbers printed in ascending order using putchar.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int digit1, digit2;

	for (digit1 = 48; digit1 <= 56; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 57; digit2++)
		{
			putchar(digit1);
			putchar(digit2);
			if (digit1 == 56 && digit2 == 57)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

