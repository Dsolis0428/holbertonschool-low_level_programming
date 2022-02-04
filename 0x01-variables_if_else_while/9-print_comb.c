#include <stdio.h>

/**
 * main - prints number 0-9 with putchar
 *
 * Return: Always 0.
 */
int main(void)
{

	int number, sing;

	for (number = 0; number < 10; number++)
	{
		sing = number % 10;
		putchar(sing + '0');
		if (sing==9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
