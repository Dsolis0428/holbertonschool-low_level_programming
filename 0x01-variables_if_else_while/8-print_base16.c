/*
 * File: 8-print_base16.c
 * Auth: Dylan Alberto Solis Martin(Bimbsy)
 */

#include <stdio.h>

/**
 * main - Program prints sll numbrers on base16 lowercase,
 *        followed by new line. Using putchar.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char base16;

	for (base16 = 48 ; base16 <= 57; base16++)
	{
		putchar(base16);
	}
	for (base16 = 97; base16 <= 102; base16++)
	{
		putchar(base16);
	}

	putchar('\n');

	return (0);
}
