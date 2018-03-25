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
