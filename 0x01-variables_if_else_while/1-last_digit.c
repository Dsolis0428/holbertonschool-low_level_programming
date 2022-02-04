#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints last digit of random num and if it is >5.<6,or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n,lastdigit);
	}
	else if (lastdigit == 0)
	{
		printf("Last digit of %d is %d and is 0);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
	}
	return (0);
}
