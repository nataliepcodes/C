#include <stdio.h>
#include <string.h>

int my_strlen(char* string)
{
    int i;
    i = 0;
    while (string[i] != '\0')
        i++;
        return i;
    /* two other options are possible:
    1)
    int len;
    len = strlen(string);
    return len;
    or
    2)
    return strlen(string);
    */
}


int main()
{
    char string[20] = "ThE C4k3 Is a L|3";
    printf("String length is: %d\n", my_strlen(string));
    return 0;
}

    
/*
Input: "abc"
Output: 3

Input: "RaInB0w d4Sh!"
Output: 13

Input: "ThE C4k3 Is a L|3"
Output: 17
*/