/*
 * File: 4-print_alphabt.c
 * Auth: Dylan Alberto Solis Martin(Bimbsy)
 */

#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase, except the letterq and
 *        and e followed by new line. Using putchar.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	char letter;

	for (letter = 97; letter <= 122; letter++)
	{
		if (letter != 101 && letter != 113)
		{
			putchar(letter);
		}
	}

	putchar('\n');

	return (0);
}
