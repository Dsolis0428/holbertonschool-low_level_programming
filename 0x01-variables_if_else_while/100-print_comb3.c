#include <stdio.h>

/**
 * main - prints number 0-9 with putchar
 *
 * Return: Always 0.
 */
int main(void)
{

	int digi1, digi2;

	for (digi1 = 0; digi1 <= 9; digi1++)
	{
		for (digi2 = 0 ; digi2 <= 10; digi2++)
		{
			if (digi1 < digi2)
			{
				putchar((digi1 %10) + '0' );
				putchar((digi2 %10) + '0' );
				if (digi1 != 8 || (digi1 == 8 && digi2 != 9))
				{
					continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');					
	return (0);
}
