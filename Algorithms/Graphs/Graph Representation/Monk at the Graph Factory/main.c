/*
 * Monk at the Graph Factory
 * https://goo.gl/GXy6UF
 * ---------------------
 *
 * -Description:
 * Our Code Monk recently learnt about Graphs and is very excited!
 *
 * He went over to the Graph-making factory to watch some freshly prepared
 * graphs. Incidentally, one of the workers at the factory was ill today, so
 * Monk decided to step in and do her job.
 *
 * The Monk's Job is to Identify whether the incoming graph is a tree or not.
 * He is given N, the number of vertices in the graph and the degree of
 * each vertex.
 *
 * Find if the graph is a tree or not.
 *
 * -Input:
 * First line contains an integer N, the number of vertices.
 * Second line contains N space-separated integers, the degrees of the
 * N vertices.
 *
 * -Output:
 * Print "Yes" (without the quotes) if the graph is a tree or "No"
 * (without the quotes) otherwise.
 *
 * -Constraints:
 * 1 <= N <= 100
 * 1 <= Degree[i] <= 1000
 */

#include <stdio.h>

int N, degs, temp;

int main() {
    scanf("%i", &N);

    /* Get a sum of all degrees */

    for (int i = 0; i < N; i++) {
        scanf("%i", &temp);

        degs += temp;
    }

    /* A graph is always a tree if the sum of all vertice
       degrees is half the number of the vertices */

    printf("%s", (2 * (N - 1) == degs) ? "Yes" : "No");

    return 0;
}
