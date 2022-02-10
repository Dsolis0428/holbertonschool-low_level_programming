#include "main.h"

/**
 * more_numbers - Prints 0-14 ten times.
 */
void more_numbers(void)
{
	int num, line;

	for (line = 0; line <= 9; line++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
