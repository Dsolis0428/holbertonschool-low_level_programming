#include <stdlib.h>
#include <time.h>
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
		putchar(sing);
	}
	putchar('\n');
	return (0);
}
