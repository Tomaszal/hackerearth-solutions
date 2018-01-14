/*
 * Monk in the real estate
 * https://goo.gl/7ZhXQp
 * ---------------------
 *
 * -Description:
 * The Monk wants to buy some cities. To buy two cities, he needs to buy the
 * road connecting those two cities. Now, you are given a list of roads, bought
 * by the Monk. You need to tell how many cities did the Monk buy.
 *
 * -Input:
 * First line contains an integer T, denoting the number of test cases. The
 * first line of each test case contains an integer E, denoting the number of
 * roads. The next E lines contain two space separated integers X and Y,
 * denoting that there is an road between city X and city Y.
 *
 * -Output:
 * For each test case, you need to print the number of cities the Monk bought.
 *
 * -Constraints:
 * 1 <= T <= 100
 * 1 <= E <= 1000
 * 1 <= X, Y <= 10000
 */

#include <stdio.h>

int T, E, temp, set[10001], ans, i;

int main()
{
	scanf("%i", &T);

	while (T--) {
		/* Reset variables from last test case */

		ans = 0;

		for (i = 0; i < 10001; i++) {
			set[i] = 0;
		}

		scanf("%i", &E);

		while (E--) {
			/* Add the town to the set if it doesn't already
			   exist and increace the answer by 1 */

			for (i = 0; i < 2; i++) {
				scanf("%i", &temp);

				if (!set[temp]) {
					ans++;
				}

				set[temp] = 1;
			}
		}

		/* Print the answer */

		printf("%i\n", ans);
	}

	return 0;
}
