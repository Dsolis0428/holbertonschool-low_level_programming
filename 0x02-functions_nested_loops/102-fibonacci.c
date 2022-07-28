#include <stdio.h>
/**
 * main - program that prints first 50 Fibonacci numbers.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int num1 = 1;
	int num2 = 1;
	int num3, i;

	printf("%d, %d, ", num1, num2);
	for (i = 2; i <= 50; i++)
	{
		num3 = num1 + num2;
		printf("%d, ", num3);
		num1 = num2;
		num2 = num3;
	}
	printf("\n");
	return (0);
}
