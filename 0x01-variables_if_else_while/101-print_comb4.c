#include <stdio.h>

/**
 * main - prints number 0-9 with putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	int digi1, digi2, digi3;

	for (digi1 = 0; digi1 < 8; digi1++)
	{
		for (digi2 = digi1 + 1; digi2 < 9; digi2++)
		{
			for(digi3 = digi2 + 1; digi3 < 10; digi3++)
			{
				putchar((digi1 % 10) + '0');
				putchar((digi2 % 10) + '0');
				putchar((digi3 % 10) + '0');
				if (digi1 == 7 && digi2 == 8 && digi3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
