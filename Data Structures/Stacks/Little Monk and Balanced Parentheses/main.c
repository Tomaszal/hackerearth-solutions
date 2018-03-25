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
