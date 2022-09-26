/*
 * File: 3-strcmp.c
 * Auth: Dylan Alberto Solis Martin (Bimbsy)
 */

#include "main.h"

/**
 * _strcmp - compare two strings.
 *@s1: A pointer to the first string to be compared.
 *@s2: A pointer to the second string to be compare.
 *
 * Return: int cmp. If string 1 < string 2, cmp = to negative diffrence
 *         of the first unmatched characters.
 *         If string 1 == string 2, cmp is euqal to z.
 *         If string 1 is > string 2, cmp is equal to the postive diffrence
 *         of the first unmatched character.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, cmp = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && cmp == 0)
	{
		cmp = s1[i] - s2[i];
		i++;
	}

	return (cmp);
}
