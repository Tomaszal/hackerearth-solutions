/*
 * Factorial!
 * https://goo.gl/yqc81v
 * ---------------------
 *
 * -Description:
 *  You need to find and print the Factorial of a given positive integer.
 *
 * -Input:
 *  The first and only line of the input contains a single integer N
 *  denoting the number whose factorial you need to find.
 *
 * -Output:
 *  Output a single line denoting the factorial of the number N.
 */

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