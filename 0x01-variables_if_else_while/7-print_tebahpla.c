/*
 * File: 7-print_tebahpla.c
 * Auth: Dylan Alberto Solis Martin(Bimbsy)
 */

#include <stdio.h>

/**
 * main - Program that prints lowercase alphabet in reverse,
 *        followed by a new line.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char letter;

	for (letter = 122; letter >= 97; letter--)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
