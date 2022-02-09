#include "main.h"

/**
 * _islower - checks for lowercase characters.
 * c = character thats going be checked
 *
 * Return 0 if chartacter is not lower case, 1 if it is.
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
