#include "main.h"

/**
 * _islower - checks is character is lowercase
 * @c: character being exmined
 * Return: 1 if the chracter is lower case if not 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
