/*
 * Two Strings
 * https://goo.gl/eeuxVJ
 * ---------------------
 *
 * -Description:
 *  Given two strings of equal length, you have to tell whether they both
 *  strings are identical. Two strings S1 and S2 are said to be identical, if
 *  any of the permutation of string S1 is equal to the string S2.
 *
 * -Input:
 *  First line, contains an intger T denoting no. of test cases. Each test
 *  consists of a single line, containing two space separated strings
 *  S1 and S2 of equal length.
 *
 * -Output:
 *  For each test case, if any of the permutation of string S1 is equal to the
 *  string S2 print YES else print NO.
 */

#include <stdio.h>

#define SIZE ('z' - 'a')

int t, flag, letters[SIZE], *l;

char string[100000], *s;

int main()
{
    scanf("%d", &t);
    
    for (; t > 0; t--)
    {
    	/* Read first string and add values to hash table */

        scanf("%s", string);
        
        for (s = string; *s != '\0'; s++)
        {
            letters[*s - 'a']++;
        }

        /* Read second string and subtract values from hash table */

        scanf("%s", string);
        
        for (s = string; *s != '\0'; s++)
        {
            letters[*s - 'a']--;
        }

        /* Check if hash table values are balanced (equal to 0) */
        
        flag = 1;
        
        for (l = letters; l != letters + SIZE; l++)
        {
            if (*l != 0)
                flag = 0;
            
            *l = 0;
        }

        /* Output result */
        
        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    return 0;
}