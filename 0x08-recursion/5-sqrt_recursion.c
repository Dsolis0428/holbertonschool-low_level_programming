#include "main.h"

/**
 *sqroot - find a square root of an integer.
 *@n: integer.
 *@i: counter.
 *Return: square root (n).
 */

int sqroot(int i, int n)
{

	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (sqroot(i + 1, n));
}
/**
 *_sqrt_recursion - find a square root of an integer.
 *@n: integer.
 *Return: square root (n).
 */

int _sqrt_recursion(int n)
{
	int a = 1;

	if (n < 1)
		return (-1);
	return (sqroot(a, n));
}
