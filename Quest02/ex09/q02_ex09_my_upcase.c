#include <stdio.h>
#include <string.h>


char* my_upcase(char* string)
{
    char *p = string;
    while(*p != '\0')
    {
        if(*p >= 97 && *p <= 122)
        *p = *p - 32;  
        p++;
    } return string;
}


int main() 
{  
    char my_str[] = "aBc";
    printf("RANDOM CASE -> %s\n", my_str);
    my_upcase(my_str);
    printf("UPPER CASE -> %s\n", my_str);
    return 0;
}


