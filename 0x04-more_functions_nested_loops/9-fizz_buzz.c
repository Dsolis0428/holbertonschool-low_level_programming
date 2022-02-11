#include <stdio.h>

/**
 * main - Prints the numbers from 1-100, if multiple of three,
 *        Fizz is printed instead of the number, if multiple of five,
 *        Buzz, and if multiple of both three and five, FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");

		else if ((i % 3) == 0)
			printf("Fizz");

		else if ((i % 5) == 0)
			printf("Buzz");

		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}

	printf("\n");

	return (0);
}
