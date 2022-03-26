#include <stdio.h>
#include <string.h>

char* my_strchr(char* str, char character)
{
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == character)
        {
           return &str[i]; 
        }
    } return NULL;
}

int main()
{
    printf("->%s\n", my_strchr("abcabc", 'b'));//bcabc
    printf("->%s\n", my_strchr("121212", '2'));//21212
    printf("->%s\n", my_strchr("abc", 'd'));//nil

    return 0;
}
