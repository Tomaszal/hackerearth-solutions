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
