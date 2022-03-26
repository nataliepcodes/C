#include <stdio.h>
#include <ctype.h>

int my_islower(char character)
{
    if (islower(character) == 0)
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
    printf("->%d\n", my_islower(char_1));
    printf("->%d\n", my_islower(empty));
    printf("->%d\n", my_islower(zero));
    return 0;
}






/*
Function islower() takes a single argument in the form of an integer and returns a value of type int.
Even though islower() takes integer as an argument, character is passed to the function. Internally, the character is converted to its ASCII value for the check.
It is defined in <ctype.h> header file.
*/