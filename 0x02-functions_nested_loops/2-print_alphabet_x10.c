#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10times, in lower case,
 * followed by a new line.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	while (i <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		i++;
	}
}
