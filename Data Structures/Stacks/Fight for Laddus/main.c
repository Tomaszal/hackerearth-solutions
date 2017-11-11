/*
 * Fight for Laddus
 * https://goo.gl/tACnDn
 * ---------------------
 *
 * -Description:
 *  Tuntun Mausi challenged Bheem and his team to solve a problem. Raju, Chutki
 *  and Bheem are trying to solve this problem but are unable to do so. As you
 *  are a good friend of Raju, he asks for your help. Given an array, For each
 *  element find the value of nearest element to the right which is having
 *  frequency greater than as that of current element. If there does not exist
 *  an answer for a position, then print '-1' Please help Raju and his team to
 *  solve this problem to get the Laddus.
 *
 * -Input:
 *  First line contains T denoting the no of test cases.
 *  First line of each test case contains N denoting the no of elements
 *  in array.
 *  Second line of each test case contains N integers (A[1] - A[n])
 *  denoting the given array.
 *
 * -Output:
 * For each test case print space separated N numbers denoting
 * the answer corresponding answer.
 *
 * -Constraints:
 * T <= 100
 * 1 <= N <= 100000
 * 1 <= A[i] <= 100000
 */

#include <stdio.h>
#include <string.h>

int t, n, i, *top;
int values[100000], frequencies[100001], stack[100000], results[100000];

int main()
{
	scanf("%d", &t);

	while (t--)
	{
		scanf("%d", &n);

		// Reset the important arrays

		memset(frequencies, 0, sizeof(frequencies));
		memset(results, -1, sizeof(results));

		// Read the value array and populate the frequencies array

		for (i = 0; i < n; i++)
		{
			scanf("%d", &values[i]);

			frequencies[values[i]]++;
		}

		// Reset the top of the stack to the beggining of the array

		top = stack;

		for (i = 0; i < n; i++)
		{
			// If stack is not empty cycle through frequencies with the index
			// of the top of the stack element until it's not less than
			// frequency of the element with the current index

			while (top != stack &&
			       frequencies[values[*top]] < frequencies[values[i]])
			{
				// Set result with the index of the top stack element to
				// the current index and pop the top stack element

				results[*(top--)] = i;
			}

			// Push the current index to the top of the stack

			*(++top) = i;
		}

		// Output the results

		for (i = 0; i < n; i++)
		{
			printf("%d ", (results[i] == -1) ? -1 : values[results[i]]);
		}

		printf("\n");
	}

	return 0;
}
