#include "main.h"

/**
 * print_sign - prints the sign of a nimber
 * @n: number being exmined
 * Return: 1 if num>zero, 0 num=zero, -1 num<0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
