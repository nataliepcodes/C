#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif


char* my_join(string_array* strArray, char* separator)
{
    char* newString;
    newString = malloc(strArray->size*sizeof(char));//malloc the new string (works but haven't allocated space for separator)

    int k = 0;

    if(strArray->size == 0)//if string array is empty
    { 
        return NULL;
    }
    
    for(int i = 0; i < strArray->size; i++)
    {
        for(int j = 0; j < strArray->array[i][j]; j++)//iterate through string(j) inside array index(i)
        {
            newString[k] = strArray->array[i][j];//new char copied inside new string
            k++;
        }
        
     if(i < strArray->size-1)//if i is less that last char of the string(do not add separator after last string)
    {
        for(int i = 0; separator[i]; i++)
        {
            newString[k] = separator[i];
            k++;
        }
    } 
    }
    

    return newString;

}

int main()
{
    char *test_array[] = {"abc", "def", "gh", "!"};//declare & initialize a test array
    
    string_array *struct_array = malloc(sizeof(string_array));//malloc struct 

    struct_array->size = 4; //initialize a size inside struct to later assign it to test_array 
    struct_array->array = malloc(struct_array->size*sizeof(char));//malloc the array inside struct

    struct_array->array = test_array;//assign test array to array inside struct

    printf("%s\n", my_join(struct_array, "-"));//call my_join function with separator and print the output


    return 0;
}
