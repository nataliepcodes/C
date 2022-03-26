#include <stdio.h>


int my_strcmp(char* str1, char* str2)
{
    while((*str1 != '\0' && *str2 != '\0') && *str1 == *str2)
    {
        str1++;
        str2++;
    }
    if(*str1 == *str2)
    {
        return 0;
    } else if(*str1 > *str2){
        return 1;
    } else {
        return -1;
    }
}

int main ()
{
    printf("my_strcmp -> %d\n", my_strcmp("abc", "bd"));//-1
    printf("my_strcmp -> %d\n", my_strcmp("bd", "abc"));//1
    printf("my_strcmp -> %d\n", my_strcmp("abc", "abc"));//0
    return 0;
}

/*
The strcmp() function is used to compare two strings two strings str1 and str2 . 
If two strings are same then strcmp() returns 0 , otherwise, it returns a non-zero value. 
This function compares strings character by character using ASCII value of the characters.
*/