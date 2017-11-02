/*
 * Toggle String
 * https://goo.gl/Aoe5Dv
 * ---------------------
 *
 * -Description:
 *  You have been given a string S consisting of uppercase and lowercase
 *  English alphabets. You need to change the case of each alphabet in this
 *  string. That is, all the uppercase letters should be converted to lowercase
 *  and all the lowercase letters should be converted to uppercase. You need to
 *  then print the resultant String to output.
 *
 * -Input:
 *  The first and only line of input contains the string S.
 *
 * -Output:
 *  Print the resultant String on a single line.
 */

#include <stdio.h>

char s[100], *p;

int main()
{
    scanf("%s", s);
    
    for (p = s; *p != '\0'; p++)
    {
    	/* Traverse through every char in a string and subtract
    	   appropriate ASCII value to change capitalisation.    */

        *p += (*p < 'a') ? 'a' - 'A' : 'A' - 'a';
    }
    
    printf("%s", s);
    
    return 0;
}
