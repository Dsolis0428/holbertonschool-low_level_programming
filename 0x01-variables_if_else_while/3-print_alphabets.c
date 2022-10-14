/*
 * File: 3-print_alphabets.c
 * Auth: Dylan Alberto Solis Martin(Bimbsy)
 */

#include <stdio.h>

/**
 * main - Program prints the alphabet in lowercase, and then in uppercase,
 *        followed by new line. Using putchar.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char letter;

	for (letter = 97; letter <= 122; letter++)
	{
		putchar(letter);
	}
	for (letter = 65; letter <= 90; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
