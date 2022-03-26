#include <stdio.h>
#include <string.h>

char* reverse_string(char* str)
{
    int len = strlen(str);
    int temp;
    for(int i =0; i < len/2; i++)
    {
        temp = str[i];
        str[i] = str[len - i -1];
        str[len - i -1] = temp;
    }
    return str;
}

int main()
{
    char my_string_1[] = "Hello";
    char my_string_2[] = "LoL";
    char my_string_3[] = "Nothing Else Matters";
    char my_string_4[] = "";
    
    printf("Before reverse -> %s\n", my_string_1);
    printf("REVERSE -> %s\n", reverse_string(my_string_1));
    printf("Before reverse -> %s\n", my_string_2);
    printf("REVERSE -> %s\n", reverse_string(my_string_2));
    printf("Before reverse -> %s\n", my_string_3);
    printf("REVERSE -> %s\n", reverse_string(my_string_3));
    printf("Before reverse -> %s\n", my_string_4);
    printf("REVERSE -> %s\n", reverse_string(my_string_4));

    return 0;
}

