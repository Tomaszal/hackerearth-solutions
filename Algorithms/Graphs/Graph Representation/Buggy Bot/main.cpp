/*
 * Buggy Bot
 * https://goo.gl/e2rCYG
 * ---------------------
 *
 * -Description:
 * Alice finally finished her CS assignment and programmed her robot to explore
 * a directed graph G with n nodes (numbered 1 through n) and m edges. Alice
 * programmed the robot with a series of k instructions. The robot will attempt
 * to execute one instruction per second in the given order; it won't repeat
 * any instruction or return to an instruction it didn't execute. Each
 * instruction is of the form "if the robot is currently at node x, it will
 * move to node y". Note that if the robot is not currently at node x, it will
 * ignore such an instruction. The robot is initially located at node 1.
 *
 * Unfortunately, the robot is a bit buggy — at one moment in time, it can move
 * from its current node to an arbitrary neighboring node (a node to which an
 * edge leads from the current node). Note that this bug could have happened
 * before any instructions, between any two instructions, or after all
 * instructions; however, it couldn't have happened multiple times. It is also
 * possible that this bug did not happen at all.
 *
 * Alice is having trouble debugging the robot, and would like your help to
 * determine all nodes where the robot could be located at the end.
 *
 * -Input:
 * The first line of the input contains three integers n, m and k, denoting the
 * number of nodes, the number of edges and the number of instructions
 * respectively.
 *
 * Each of the following m lines contains two space-separated integers a[i]
 * and b[i] denoting a directed edge from node a[i] to node b[i].
 *
 * Each of the following k lines contains two space-separated integers x[i] and
 * y[i] denoting an instruction for the robot.
 *
 * -Output:
 * On the first line, print a single integer F — the number of possible final
 * nodes for the robot.
 *
 * On the second line, print F space-separated integers, representing the
 * possible final nodes for the robot, in increasing order.
 *
 * -Constraints:
 * 1 <= n <= 100000
 * 1 <= m, k <= 1000000
 * 1 <= a[i], b[i] <= n
 * 1 <= x[i], y[i] <= n
 * each instruction for the robot will correspond to an existing directed edge
 * the graph won't contain loops - x[i] != y[i]
 * the graph won't contain multiple edges - (x[i], y[i]) != (x[j], y[j])
 */

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
			printf("%i - %i\n", j, ee[j]);
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
