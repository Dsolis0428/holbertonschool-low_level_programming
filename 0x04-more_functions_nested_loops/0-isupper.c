#include "main.h"

/**
 * _isupper - Checks for uppercase char.
 * @c: The character to be checked.
 *
 * Return:1 if char is uppercase, 0 if not.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return(1);
	}
	else
	{
		return(0);
	}

}
