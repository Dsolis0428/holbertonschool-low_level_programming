#include <stdio.h>

/**
 * main - prints number 0-9 with putchar
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 48;

	for(i; i <= 57; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
