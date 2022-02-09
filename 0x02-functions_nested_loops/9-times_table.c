#include "main.h"

/**
 * times_table - Write a function that prints the 9 times table, starting with 0
 *
 *
 */
void times_table(void)
{
	int num, multi, answ;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');
			
			answ = num * multi;
		}
		if (answ <= 9)
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

