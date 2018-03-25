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
