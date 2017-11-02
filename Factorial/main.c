// Factorial!
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/

#include <stdio.h>

int n;

int factorial(int x)
{
	return (x == 1) ? 1 : x * factorial(x - 1);
}

int main()
{
    scanf("%d\n", &n);

    printf("%d\n", factorial(n));

	return 0;
}