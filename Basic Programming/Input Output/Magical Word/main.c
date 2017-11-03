/*
 * Magical Word
 * https://goo.gl/16fSmg
 * ---------------------
 *
 * -Description:
 *  A word which consist of alphabets whose ASCII values is a prime number is
 *  an Dhananjay's Magical word. An alphabet is Dhananjay's Magical alphabet if
 *  its ASCII value is prime.
 *
 *  Rules for converting:
 *    1. Each character should be replaced by the nearest Dhananjay's Magical
 *       alphabet.
 *    2. If the character is equidistant with 2 Magical alphabets. The one with
 *       lower ASCII value will be considered as its replacement.
 *
 * -Input:
 *  First line of input contains an integer T number of test cases. Each test
 *  case contains an integer N (denoting the length of the string) and a
 *  string S.
 *
 * -Output:
 *  For each test case, print Dhananjay's Magical Word in a new line.
 */

#include <stdio.h>

/* Checks if character's ASCII value is prime */

int is_prime(char c)
{
	int flag = 1;

	for (int j = 2; j * j <= c; j++)
	{
		if (c % j == 0)
		{
			flag = 0;
			break;
		}
	}

	return flag;
}

/* Check if character is alpha */

int check_bounds(char c)
{
	if (c < 'A' || c > 'z')
		return 0;

	if (c > 'Z' && c < 'a')
		return 0;

	return 1;
}

int t, i;

char s[500], *p;

/* Check if ASCII value of neighbor with distance I is prime and in bounds */

int check_neighbor(int multiplier)
{
	if (check_bounds(*p + i * multiplier) && is_prime(*p + i * multiplier))
	{
		*p = *p + i * multiplier;
		return 1;
	}

	return 0;
}

int main()
{
	scanf("%d\n", &t);

	for (; t > 0; t--)
	{
		scanf("%*d\n%s\n", s);

		for (p = s; *p != '\0'; p++)
		{
			/* Traverse through neighbors */

			for (i = 0; ; i++)
			{
				/* Prioritize neighbors with smaller ASCII value */

				if (check_neighbor(-1) || check_neighbor(1))
					break;
			}

			printf("%c", *p);
		}

		printf("\n");
	}

	return 0;
}