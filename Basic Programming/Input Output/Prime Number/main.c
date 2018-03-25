#include <stdio.h>

int i, j, n, flag[1001];

int main()
{
    scanf("%d", &n);

    /* Flag 1 as non-prime */

    flag[1] = 1;

    for (i = 1; i < n; i++)
    {
        if (!flag[i])
        {
            /* Print the number if it isn't flagged as non-prime */

            printf("%d ", i);

            for (j = i; j < n; j += i)
            {
                /* Flag all products of the prime as non-primes */

                flag[j] = 1;
            }
        }
    }

    return 0;
}
