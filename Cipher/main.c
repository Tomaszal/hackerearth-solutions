// Cipher
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cipher-1/

#include <stdio.h>

char s[100000000], *p;

int n;

int main ()
{
	scanf("%s\n%d", s, &n);

	for (p = s; *p != '\0'; p++)
	{
		if (*p >= '0' && *p <= '9')
			printf("%c", '0' + (*p + n - '0') % ('9' - '0' + 1));
		else if (*p >= 'A' && *p <= 'Z')
			printf("%c", 'A' + (*p + n - 'A') % ('Z' - 'A' + 1));
		else if (*p >= 'a' && *p <= 'z')
			printf("%c", 'a' + (*p + n - 'a') % ('z' - 'a' + 1));
		else
			printf("%c", *p);
	}

	return 0;
}