#include "main.h"

/**
 * print_square - prints a square of desired size
 * @size: size of square
 *
 * Return: void
 */


void print_square(int size)
{
	int line, square;

	if (size <= 0)
		_putchar('\n');
	for (line = 0; line < size; line++)
	{
		for (square = 0; square < (size); square++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
