#include "main.h"

/**
 * jack_bauer - prints every min of day starting 00:00 to 23:59
 *
 *
 */
void jack_bauer(void)
{
	int num, multi, answ;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0')
		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');
			
			anws = num * multi
		}
		if (anws <= 9)
		{
			_putchar(' ');
		}
		else
		{
			_putchar((answ / 10) + '0');
		}
		_putchar ((answ % 10) + '0');
	}
	_putchar('\n');
	}

}
