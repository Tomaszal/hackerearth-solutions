#include <stdio.h>
#include <bitset>

unsigned long N, i, j, temp, ans;
std::bitset<2000> G[2000];

int main() {
	scanf("%i", &N);

	/* Populate the bitset (adjacency matrix) */
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			scanf("%i", &temp);
			G[i][j] = (temp == 1);
		}
	}

	for (i = 0; i < N; i++) {
		for (j = i + 1; j < N; j++) {
			/* Count how many vertices connected
			   are connected to both G[i] and G[j] */
			temp = (G[i] & G[j]).count();

			/* Add the number of ways to pick 2
			   elements out of 'temp' to the answer */
			ans += temp * (temp - 1) / 2; // n choose 2
		}
	}

	printf("%li", ans / 2);

	return 0;
}
