#include <stdio.h>

int n;

/* Use recursive function to calculate factorial */

int factorial(int x)
{
	return (x > 1) ? x * factorial(x - 1) : 1;
}

int main()
{
    scanf("%d\n", &n);

    printf("%d\n", factorial(n));

	return 0;
}
