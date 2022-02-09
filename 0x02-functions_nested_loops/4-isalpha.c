#include "main.h"

/**
 * _isalpha - checks is character for alphabetic character
 * @c: character being exmined
 * Return: 1 if the chracter is upper or lowercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
