/*
 * AABBAAC
 * https://goo.gl/CsG8Y9
 * ---------------------
 *
 * -Description:
 *  You are given an array S of N strings numbered from 0 to N-1. You build
 *  string sequence Ti by the following rules:
 *    1. T[0] = S[0]
 *    2. T[i] = T[i-1] + reverse(T[i-1]) + S[i]
 *  Now please answer M queries: by non-negative integer x output x-th
 *  character of the T[N-1] in 0-based indexation. It's guaranteed that x-th
 *  character of the T[N-1] exists.
 *
 * -Input:
 *  The first line contains T - the number of test cases. Then T test cases
 *  follow. Each test case starts with line containing 2 integers: N and M.
 *  Next N lines describe array S - one string per line. Then M lines follow
 *  describing queries - one non-negative integer per line.
 *
 * -Output:
 *  Output T lines. Each line should contain one string containing answers for
 *  the corresponding test case. Don't separate answers which belong to one
 *  test case by whitespaces or anything else.
 *
 * -Constraints:
 *    T <= 100
 *    length of each S[i] <= 100
 *    N <= 50
 *    M <= 1000
 *
 * -Notes:
 *    It took me a while to understand how to solve this, so I've tried to
 *    explain it more thoroughly than usual. Some things were difficult to put
 *    into words so my comments might seem confusing in some places.
 */

#include <stdio.h>

int i, t, n, m;

long x, lengths[50];

char strings[50][100], *p;

int main()
{
	scanf("%d\n", &t);

	while (t--)
	{
		scanf("%d %d\n", &n, &m);

		/* Populate the LENGTHS and the STRINGS arrays */

		for (i = 0; i < n; i++)
		{
			/* Reset LENGTHS from last test case */

			lengths[i] = 0;

			/* Read N strings into STRINGS array */

			scanf("%s\n", strings[i]);

			/* Calculate length of the string */

			for (p = strings[i]; *p != '\0'; p++)
				lengths[i]++;

			/* Add previous length sum to current length sum
			   (multiplied by 2 to account for mirrored string) */

			lengths[i] += lengths[i - 1] * 2;
		}

		/* Execute queries */

		while (m--)
		{
			/* Set X to current query */

			scanf("%ld\n", &x);

			/* Search for the string index in which the query is located */

			/* Start from N and work down the LENGTHS array, stop when X is
			   bigger than double the length of the string with lower index
			   (again, because the string is mirrored) */

			for (i = n - 1; x < 2 * lengths[i - 1]; i--)
			{
				/* When X is bigger than the length of the string with lower
				   index it means it is in the reversed part of the string;
				   If that happens, set X position to the part that would be
				   reversed (as the string would just be mirrored) */

				if (x >= lengths[i - 1])
					x = 2 * lengths[i - 1] - x - 1;
			}

			/* Print out the character X (minus double the
			   length of the string with lower index) of the
			   string with the index I that we found earlier */

			printf("%c", strings[i][x - 2 * lengths[i - 1]]);
		}

		printf("\n");
	}

	return 0;
}