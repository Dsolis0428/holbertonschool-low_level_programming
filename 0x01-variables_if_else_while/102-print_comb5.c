/*
 * File: 102-print_comb5.c
 * Auth: Dylan Alberto Solis Martin (Bimbsy)
 */

#include <stdio.h>

/**
 * main - Program that prints all possible combinations of two two-digit
 *        numbers. The two numbers should be separated by a space.
 *        All numbers should be printed with two digits.
 *        1 should be printed as 01.
 *        The combination of numbers must be separated by comma,
 *        followed by a space.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int number1, number2;

	for (number1 = 0; number1 <= 98; number1++)
	{
		for (number2 = number1 + 1; number2 <= 99; number2++)
		{
			putchar((number1 / 10) + '0');
			putchar((number1 % 10) + '0');
			putchar(' ');
			putchar((number2 / 10) + '0');
			putchar((number2 % 10) + '0');
			if (number1 == 98 && number2 == 99)
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
