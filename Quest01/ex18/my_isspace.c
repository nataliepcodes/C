#include <stdio.h>
#include <ctype.h>

int my_isspace(char white_space)
{
    if (isspace(white_space) == 0)
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
    int white_space = ' ';
    printf("->%d\n", my_isspace(char_1));
    printf("->%d\n", my_isspace(capital_char));
    printf("->%d\n", my_isspace(white_space));
    return 0;
}


/*
The isspace() function checks whether a character is a white-space character or not.
If an argument (character) passed to the isspace() function is a white-space character, it returns non-zero integer. If not, it returns 0.

List of all white-space characters in C programming are:

Character	Description
' '	space
'\n'	newline
'\t'	horizontal tab
'\v'	vertical tab
'\f'	form feed
'\r'	Carraige return


*/