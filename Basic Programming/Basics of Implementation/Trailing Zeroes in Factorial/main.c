/*
 * Trailing Zeroes in Factorial
 * https://goo.gl/KADLd8
 * ---------------------
 *
 * -Description:
 *  Mr. Yash asks all the great programmers of the world to solve a trivial
 *  problem. He gives them an integer m and asks for the number of positive
 *  integers n, such that the factorial of n ends with exactly m zeroes. Are
 *  you among those great programmers who can solve this problem?
 *
 * -Input:
 *  First line of input contains an integer T number of test cases. Each test
 *  case contains an integer M (1 ≤ M ≤ 100,000) — the required number of
 *  trailing zeroes in factorial.
 *
 * -Output:
 *  First print k — the number of values of n such that the factorial of n ends
 *  with m zeroes. Then print these k integers in increasing order.
 */

#include <stdio.h>

int t, m, factorial, temp, count;

int main()
{
	scanf("%d\n", &t);

	while (t--)
	{
		scanf("%d\n", &m);

		/* Each (5^n)-th factorial will have 'n'
		   more trailing zeros than the last one */

		/* Look at each 5th factorial */

		for (factorial = 5; count < m; factorial += 5)
		{
			/* Count how many times it can be divided by 5 */

			for (temp = factorial; temp >= 5 && temp % 5 == 0; temp /= 5)
			{
				count++;
			}
		} 

		if (count == m)
		{
			/* There will always be 5 factorials with
			   the same ammount of trailing zeroes */

			printf("5\n%d %d %d %d %d\n", factorial - 5, factorial - 4,
				factorial - 3, factorial - 2, factorial - 1);
		}
		else
		{
			/* If 'count' doesn't match 'm' it means there is
			   no factorial with exactly 'm' trailing zeros */

			printf("0\n");
		}

		count = 0;
	}

	return 0;
}