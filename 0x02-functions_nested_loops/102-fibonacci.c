#include <stdio.h>
/**
 * main - program that prints first 50 Fibonacci numbers.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	long int num1 = 0;
	long int num2 = 1;
	long int num3;
	int i;

	for (i = 0; i < 50; i++)
	{
		num3 = num1 + num2;
		printf("%ld", num3);
		num1 = num2;
		num2 = num3;

		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
