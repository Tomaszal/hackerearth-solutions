/*
 * Play with numbers
 * https://goo.gl/FkpT9P
 * ---------------------
 *
 * -Description:
 *  You are given an array of n numbers and q queries. For each query you have
 *  to print the floor of the expected value(mean) of the subarray from L to R.
 *
 * -Input:
 *  First line contains two integers N and Q denoting number of array elements
 *  and number of queries. Next line contains N space seperated integers
 *  denoting array elements. Next Q lines contain two integers L and R
 *  (indices of the array).
 *
 * -Output:
 *  Print a single integer denoting the answer.
 */

#include <stdio.h>

long n, q, r, l, array[1000000], *p;

int main()
{
	scanf("%d %d\n%d ", &n, &q, array);

	/* Build an array of sums */

	for (p = array + 1; p - array < n; p++)
	{
		scanf("%d ", p);

		*p += *(p - 1);
	}

	/* Calculate the answer for each query */

	for (; q > 0; q--)
	{
		scanf("\n%d %d", &l, &r);

		printf("%d\n", (array[r - 1] - array[l - 2]) / (r - l + 1));
	}

	return 0;
}