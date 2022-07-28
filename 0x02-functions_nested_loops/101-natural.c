#include <stdio.h>
/**
 * main - program that prints sum of all mult of
 *		3 and 5 below 1024.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;
	int answ = 0;

	for (x; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			answ += x;
		}
	}
	printf("%d\n", answ);
	return (0);
}
