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
