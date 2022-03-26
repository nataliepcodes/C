#include <stdio.h>
#include <ctype.h>

int my_isdigit(char digit)
{
    if (isdigit(digit) == 0)
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
    printf("->%d\n", my_isdigit(char_1));
    printf("->%d\n", my_isdigit(empty));
    printf("->%d\n", my_isdigit(zero));
    return 0;
}

/*
Function isdigit() takes a single argument in the form of an integer and returns the value of type int.
Even though, isdigit() takes integer as an argument, character is passed to the function. Internally, the character is converted to its ASCII value for the check.
It is defined in <ctype.h> header file.
*/