/*
 * Little Shino and the tournament
 * https://goo.gl/hb92Nk
 * ---------------------
 *
 * -Description:
 *  Little Shino is interested in the fighting tournaments. Once she went to
 *  watch one of the tournaments. There were N fighters and i-th fighter will
 *  be represented by i. Each fighter has some distinct strength. Rules of the
 *  tournament are:
 *
 *    1. Each fight will have 2 fighters.
 *    2. In a fight, fighter with more strength will win.
 *    3. In one round, 1st fighter will fight against 2nd fighter, 3rd fighter
 *       will fight against 4th fighter and so on. If there is odd number of
 *       fighters, last one will qualify to the next round without fighting.
 *
 * -Input:
 *  First line contains 2 integers, N and Q, number of fighters and number of
 *  queries. Second line contains N space separated integers. k-th integer
 *  represents the strength of k-th fighter.
 *  Next Q line contain one integer i each, denoting Q queries.
 *
 * -Output:
 *  For each query, print the number of fights i-th fighter will take part in.
 */

#include <stdio.h>

struct fighter
{
	int strength;
	int fights;
};

int n, q, i, fighter_id = -1, fighters_left = 1;

struct fighter fighters[100001];

int main()
{
	/* Populate variables */

	scanf("%d %d\n", &n, &q);

	for (i = 0; i < n; i++)
	{
		scanf("%d ", &fighters[i].strength);
	}

	/* Simulate fights until there is less than 2 fighters left */

	while (fighters_left > 0)
	{
		/* Reset fighters from last fight and simulate another one */

		fighters_left = fighter_id = -1;

		for (i = 0; i < n; i++)
		{
			/* Check if fighter is not out of the game */

			if (fighters[i].strength > 0)
			{
				fighters_left++;

				if (fighter_id == -1)
				{
					fighter_id = i;
				}
				else
				{
					/* Kick the weaker fighter out of the game */

					if (fighters[fighter_id].strength < fighters[i].strength)
						fighters[fighter_id].strength = -1;
					else
						fighters[i].strength = -1;

					/* Increace fight ammount for both fighters */

					fighters[fighter_id].fights++;
					fighters[i].fights++;

					fighter_id = -1;
				}
			}
		}
	}

	/* Output results */

	while (q--)
	{
		scanf("\n%d", &i);

		printf("%d\n", fighters[i - 1].fights);
	}

	return 0;
}