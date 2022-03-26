#include <stdio.h>
#include <string.h>

char* my_strrchr(char* str, char character)
{
  int len = strlen(str);
  char *last_char;
    for(int i = len; i >= 0; i--)
    {
        if(str[i] == character)
        {
           last_char = &str[i];
           return last_char;
        } 
    } return NULL;
}

int main()
{
    printf("->%s\n", my_strrchr("abcabc", 'b'));//bc
    printf("->%s\n", my_strrchr("121212", '2'));//2
    printf("->%s\n", my_strrchr("abc", 'd'));//nil

    return 0;
}