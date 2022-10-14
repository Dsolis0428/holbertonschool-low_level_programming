/*
 * File: 100-print_comb3.c
 * Auth: Dylan Alberto Solis Martin(Bimbsy)
 */

#include <stdio.h>

/**
 * main - Prints all posible combinations of three digits.
 *        The three digits must be diffrent. 012, 120, 102, 201, 210 are
 *        consider the same three digits of 0, 1 and 2.
 *        Numbers are seperated by ',' and followed by a space.
 *        Numbers printed in ascending order using putchar.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 48; digit1 <= 55; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 56; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 <= 57; digit3++)
			{
				putchar(digit1);
				putchar(digit2);
				putchar(digit3);
				if (digit1 == 55 && digit2 == 56 && digit3 == 57)
				{
					continue;
				}
			putchar(',');
			putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

