/*
 * File: 2-print_alphabet.c
 * Auth: Dylan Alberto Solis Martin(Bimbsy)
 */

#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase, followed by new line.
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

	putchar('\n');

	return (0);
}
