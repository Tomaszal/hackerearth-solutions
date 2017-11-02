// Prime Number
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/prime-number-8/
// 
// Done by using Sieve of Eratosthenes

#include <stdio.h>

int i, j, n, flag[1001];

int main()
{
    scanf("%d", &n);
    
    flag[1] = 1;
    
    for (i = 1; i < n; i++)
    {
        if (flag[i])
        {
            continue;
        }
        else
        {
            printf("%d ", i);
            
            for (j = i; j < n; j += i)
            {
                flag[j] = 1;
            }
        }
    }
    
    return 0;
}
