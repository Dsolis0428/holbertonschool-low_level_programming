/*
 * File: 0-positive_or_negative.c
 * Auth: Dylan Alberto Solis Martin (Bimbsy)
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program assigns a random number to the variable n, and prints whether
 *        the number stored in n is positive or negative.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is postive \n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
