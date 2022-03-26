#include <stdio.h>
#include <ctype.h>

int my_isalpha(char c)
{
    if (isalpha(c) == 0)
    {
        return 0;
    } else {
        return 1;
    }
}

int main()
{
    int char_1 = 'a'; 
    int empty = ' ';
    int zero = '0';
    printf("->%d\n", my_isalpha(char_1));
    printf("->%d\n", my_isalpha(empty));
    printf("->%d\n", my_isalpha(zero));
    return 0;
}


/*
The isalpha() function checks whether a character is an alphabet or not.
In C programming, isalpha() function checks whether a character is an alphabet (a to z and A-Z) or not.
If a character passed to isalpha() is an alphabet, it returns a non-zero integer, if not it returns 0.
The isalpha() function is defined in <ctype.h> header file.
*/

