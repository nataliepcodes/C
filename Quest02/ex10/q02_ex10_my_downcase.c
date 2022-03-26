#include <stdio.h>
#include <string.h>


char* my_downcase(char* string)
{
    char *p = string;
    while(*p != '\0')
    {
        if(*p >= 65 && *p <= 90)
        *p = *p + 32;  
        p++;
    } return string;
}


int main() 
{  
    char my_str[] = "aBc";
    printf("RANDOM CASE -> %s\n", my_str);
    my_downcase(my_str);
    printf("DOWN CASE -> %s\n", my_str);
    return 0;
}

/*
All the upper case characters (A-Z) have ASCII value ranging from 65 to 90 and 
their corresponding lower case characters (a-z) have ASCII value 32 greater than them. 
For example ‘A‘ has a ASCII value 65 and ‘a‘ has a ASCII value 97 (65+32).

*/