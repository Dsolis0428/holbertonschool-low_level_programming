#include "main.h"

/**
 * print_line - draws straight line in terminal.
 * @n: number of times line will be printed.
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}

	_putchar('\n');
}
