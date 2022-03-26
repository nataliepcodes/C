#include <stdio.h>
#include <ctype.h>

int my_isupper(char capital_character)
{
    if (isupper(capital_character) == 0)
    {
        return 0;
    } else {
        return 1;
    }
}

int main()
{
    int char_1 = 'a'; 
    int capital_char = 'A';
    int zero = '0';
    printf("->%d\n", my_isupper(char_1));
    printf("->%d\n", my_isupper(capital_char));
    printf("->%d\n", my_isupper(zero));
    return 0;
}



/*
Function isupper() takes a single argument in the form of an integer and returns a value of type int.
Even though, isupper() takes integer as an argument, character is passed to the function. Internally, the character is converted to its ASCII for the check.
It is defined in <ctype.h> header file.
*/