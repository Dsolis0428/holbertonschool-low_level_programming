/*
 * File: 6-print_numberz.c
 * Auth: Dylan Alberto Solis Martin
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        followed by a new line. Using putchar.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);
	}

	putchar('\n');

	return (0);
}
