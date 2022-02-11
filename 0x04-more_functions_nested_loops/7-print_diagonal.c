#include "main.h"

/**
 * prints_diagonal - Prints a diagonal line.
 * @n: length of line
 */
void prints_diagonal(int n)
{
	int diag, line;

	if (n <=0)
		_putchar('\n');
	for (line = 0; line < n; line++)
	{
		for (diag = 0; diag < line; diag++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
