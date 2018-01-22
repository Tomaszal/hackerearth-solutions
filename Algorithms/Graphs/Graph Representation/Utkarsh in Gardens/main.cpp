/*
 * Utkarsh in Gardens
 * https://goo.gl/4vstix
 * ---------------------
 *
 * -Description:
 * Utkarsh has recently put on some weight. In order to lose weight, he has to
 * run on boundary of gardens. But he lives in a country where there are no
 * gardens. There are just many bidirectional roads between cities. Due to the
 * situation, he is going to consider any cycle of length four as a garden.
 * Formally a garden is considered to be a unordered set of 4 roads
 * {r0, r1, r2, r3} where ri and ri+1 mod 4 share a city. Now he wonders how
 * many distinct gardens are there in this country.
 *
 * -Input:
 * The first integer contains N, the number of cities in the country.
 * It is followed by space separated elements of N*N binary matrix G.
 * G[i][j] = 1 denotes there is a road between ith city and jth city.
 * A pair of cities has atmost one road connecting them.
 * No road connects a city to itself.
 * G is symmetric.
 *
 * -Output:
 * Print the total number of gardens.
 *
 * -Constraints:
 * 1 <= N <= 2000
 */

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
