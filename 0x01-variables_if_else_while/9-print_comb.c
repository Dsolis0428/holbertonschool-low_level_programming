#include <stdio.h>

/**
 * main - prints number 0-9 with putchar
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		{
			continue;
		}

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
