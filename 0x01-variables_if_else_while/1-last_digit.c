/*
 * File: 1-last_digit.c
 * Auth: Dylan Alberto Solis Martin (Bimbsy)
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program assigns a random number to the variable n, and prints the
 *        the last digit of the number stored in n.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDig = n % 10;

	if (lastDig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDig);
	}
	else if (lastDig == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDig);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDig);
	}
	return (0);
}
