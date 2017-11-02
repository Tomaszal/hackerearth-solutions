// Two Strings
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/two-strings-4/

#include <stdio.h>
#include <stdbool.h>

#define SIZE ('z' - 'a')

int t, flag, letters[SIZE], *l;

char string[100000], *s;

int main()
{
    scanf("%d", &t);
    
    for (; t > 0; t--)
    {
    	// Read first string and add values to hash table

        scanf("%s", string);
        
        for (s = string; *s != '\0'; s++)
        {
            letters[*s - 'a']++;
        }

        // Read second string and subtract values from hash table

        scanf("%s", string);
        
        for (s = string; *s != '\0'; s++)
        {
            letters[*s - 'a']--;
        }

        // Check if hash table values are balanced (equal to 0)
        
        flag = 1;
        
        for (l = letters; l != letters + SIZE; l++)
        {
            if (*l != 0)
                flag = 0;
            
            *l = 0;
        }

        // Output result
        
        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    return 0;
}