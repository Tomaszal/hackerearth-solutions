/*
 * Prime Number
 * https://goo.gl/CH4GjZ
 * ---------------------
 *
 * -Description:
 *  You are given an integer N. You need to print the series of all prime
 *  numbers till N.
 *
 * -Input:
 *  The first and only line of the input contains a single integer N denoting
 *  the number till where you need to find the series of prime number.
 *
 * -Output:
 *  Print the desired output in single line separated by spaces.
 *
 * -Note:
 *  I used Sieve of Eratosthenes for this problem.
 */

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
