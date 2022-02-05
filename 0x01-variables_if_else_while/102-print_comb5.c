#include <stdio.h>

/**
 * main -  program that prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int digi1, digi2;

	for (digi1 = 0; digi1 <=98 ; digi1++)
	{
		for (digi2 = digi1 + 1; digi2 <= 99; digi2++)
		{
			putchar((digi1 / 10) + '0');
			putchar((digi1 % 10) + '0');
			putchar(' ')
			putchar((digi2 / 10) + '0');
			putchar((digi2 % 10) + '0');
			if (digi1 == 98 && digi2 == 99)
				continue;
					putchar(',');
					putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
