#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints alphabet in order
 *
 * Return: Always 0.
 */
int main(void)
{

	char letter;
	int number;

	for (number = 0; number < 10; number++)

	{
		putchar((number % 10) + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
