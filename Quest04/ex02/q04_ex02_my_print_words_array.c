#include <stdio.h>
#include <string.h>
#include <unistd.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

void my_putchar(char str) {
    write(1, &str, 1); // write(1, string, strlen(string)); /* 1 = STDOUT */
}

void my_putstr(char *str)
{
    char *p = str;
    while(*p != '\0')
    {
        my_putchar(*p);
        p++;
    }
    my_putchar('\n');
}


void my_print_words_array(string_array* array_with_strings)
{
    int len = array_with_strings ->size;
    char **a = array_with_strings->array;

    for(int i = 0; i < len; i++)
    {
        my_putstr(a[i]);
        
    } 
}

int main()
{
    char *array[] = {"abc", "def","gh"};
    
    string_array a = { .array = array, .size = 3,};

    my_print_words_array(&a);

    return 0;
}