/*
 * Seating Arrangement
 * https://goo.gl/aPCLgX
 * ---------------------
 *
 * -Description:
 *  Akash and Vishal were travelling in a train one day and they got interested
 *  to know the seat number facing them and the seat type facing them.
 *
 *  The compartment looked something like this (up to 108 seats):
 *    06   07 | 18   19 | 30   31 | 42   43 | 54   55 | 66   67 | ..   ..
 *    05   08 | 17   20 | 29   32 | 41   44 | 53   56 | 65   68 | ..   ..
 *    04   09 | 16   21 | 28   33 | 40   45 | 52   57 | 64   69 | ..   ..
 *
 *    03   10 | 15   22 | 27   34 | 39   46 | 51   58 | 63   70 | ..   ..
 *    02   11 | 14   23 | 26   35 | 38   47 | 50   59 | 62   71 | ..   ..
 *    01   12 | 13   24 | 25   36 | 37   48 | 49   60 | 61   72 | ..   ..
 *
 *  The seats are denoted as follows:
 *    Window Seat : WS
 *    Middle Seat : MS
 *    Aisle Seat  : AS
 *
 * -Input:
 *  First line of input will consist of a single integer T denoting number of
 *  test-cases. Each test-case consists of a single integer N denoting
 *  the seat-number.
 *
 * -Output:
 *  For each test case, print the facing seat-number and the seat-type,
 *  separated by a single space in a new line.
 */

#include <stdio.h>

int t, n;

int main()
{
    scanf("%d\n", &t);
    
    for (; t > 0; t--)
    {
        scanf("%d\n", &n);
        
        /* Calculate the facing seat-number */

        n = n + 2 * (6 - (n - 1) % 12) - 1;
        
        printf("%d ", n);

        /* Check the type of a seat */
        
        if (n % 6 < 2)
            printf("WS\n");
        else if (n % 6 == 2 || n % 6 == 5)
            printf("MS\n");
        else
            printf("AS\n");
    }
    
    return 0;
}
