// Seating Arrangement
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seating-arrangement-1/

#include <stdio.h>

int t, n;

int main()
{
    scanf("%d\n", &t);
    
    for (; t > 0; t--)
    {
        scanf("%d\n", &n);
        
        n = n + 2 * (6 - (n - 1) % 12) - 1;
        
        printf("%d ", n);
        
        if (n % 6 < 2)
            printf("WS\n");
        else if (n % 6 == 2 || n % 6 == 5)
            printf("MS\n");
        else
            printf("AS\n");
    }
    
    return 0;
}
