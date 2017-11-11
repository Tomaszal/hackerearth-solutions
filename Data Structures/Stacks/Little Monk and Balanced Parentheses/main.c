/*
 * Little Monk and Balanced Parentheses
 * https://goo.gl/NypJN4
 * ---------------------
 *
 * -Description:
 *  Given an array of positive and negative integers, denoting different types
 *  of parentheses. The positive numbers x[i] denotes opening parentheses of
 *  type x[i] and negative number −x[i] denotes closing parentheses of type
 *  x[i]. Open parentheses must be closed by the same type of parentheses. Open
 *  parentheses must be closed in the correct order, i.e., never close an open
 *  pair before its inner pair is closed (if it has an inner pair). Thus,
 *  [1, 2, −2, −1] is balanced, while [1, 2, −1, −2] is not balanced.
 *  You have to find out the length of the longest subarray that is balanced.
 *
 * -Input:
 *  First line contains an input N, denoting the number of parentheses.
 *  Second line contains N space separated integers. x[i] denoting the i-th
 *  parentheses of the array.
 *
 * -Output:
 *  Print the length of the longest subarray that is balanced.
 *
 * -Constraints:
 *  1 <= N <= 200000
 *  -100000 <= x[i] <= 100000
 *  x[i] != 0
 */

#include <stdio.h>

int n, x, i, parentheses[200000], *top;

int streak, streak_index, streak_old, streak_max;

int main()
{
	scanf("%d", &n);

	top = parentheses;

	for (i = 0; i < n; i++)
	{
		scanf("%d", &x);

		if (top != parentheses && x < 0 && *top == (-1 * x))
		{
			// Pop the top element of the stack
			// if it is a closing parenthesis

			top--;

			// If current streak goes after the old streak
			// continue counting from where we left off

			if (streak_index + 2 == i)
				streak = streak_old;

			// Increace the current streak by one

			streak++;

			// Set old streak to the current streak and update it's index

			streak_old = streak;
			streak_index = i;

			// Assign new max streak if needed

			if (streak_max < streak)
				streak_max = streak;
		}
		else
		{
			// Push a new element to the top of the
			// stack if it is an opening parenthesis.

			*(++top) = x;

			// Reset the current streak

			streak = 0;
		}
	}

	printf("%d\n", streak_max * 2);

	return 0;
}
