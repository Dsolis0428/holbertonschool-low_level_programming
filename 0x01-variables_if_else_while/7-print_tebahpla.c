#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints alphabet in order and backwards
 *
 * Return: Always 0.
 */
int main(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'z'; letter <= 'a; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
