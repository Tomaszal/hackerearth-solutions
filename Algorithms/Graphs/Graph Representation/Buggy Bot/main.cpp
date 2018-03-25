#include <stdio.h>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

const int MAX_N = 100001;
const int MAX_K = 1000001;

int n, m, k, ia[MAX_K], ib[MAX_K], ee[MAX_K], pos[MAX_K] = {1};
set<int> G[MAX_N], temp[MAX_N], ans;

int main()
{
	scanf("%i %i %i", &n, &m, &k);

	// Populate the set (directional adjacency matrix)

	for (int i = 0, a, b; i < m; i++) {
		scanf("%i %i", &a, &b);
		G[a].insert(b);
	}

	// Scan movements and populate positions in time

	for (int i = 0; i < k; i++) {
		scanf("%i %i", &ia[i], &ib[i]);

		if (pos[i] == ia[i]) {
			pos[i + 1] = ib[i];
		} else {
			pos[i + 1] = pos[i];
		}
	}

	// Add the final position to the answer set

	ans.insert(pos[k]);

	for (int i = 1; i <= n; i++) {
		ee[i] = i;
	}

	// Simulate the process backwards, not 100% sure how it works

	// Keep track of two graphs (one with active, other with inactive edges)
	// Look at active edges, skip inactive
	// Swap edges between and forth to determine which should be examined

	for (int i = k; i >= 0; i--) {
		for (int j : G[pos[i]]) {
			ans.insert(ee[j]);
			temp[j].insert(pos[i]);
		}

		G[pos[i]].clear();

		if (i > 0) {
			ee[ia[i - 1]] = ee[ib[i - 1]];

			for (int j : temp[ia[i - 1]]) {
				G[j].insert(ia[i - 1]);
			}
		}
	}

	// Sort the answer set and output the answer

	printf("%i\n", ans.size());
	vector<int> xx(ans.begin(), ans.end());
	sort(xx.begin(), xx.end());
	for (int i = 0; i < xx.size(); i++) {
		printf("%i ", xx[i]);
	}

	return 0;
}
