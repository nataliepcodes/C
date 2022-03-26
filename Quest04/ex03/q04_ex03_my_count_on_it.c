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

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


integer_array* my_count_on_it(string_array* string) 
{

    integer_array *intArray;//declare integer array
    intArray = malloc(sizeof(integer_array));

    int size = string->size;//assign a pointer of string struct size to size variable
    intArray->size = size; //assign string size to integer array size(pointer to integer array struct

    int *len; //length of int array
    len = (int*)malloc(size*sizeof(int));
    intArray->array = len;


    if(intArray == NULL)//if memory allocation failed
    {
        return NULL;
    }


    for(int i = 0; i < size; i++)
    {
        len[i] = strlen(string->array[i]);//strlen counts the number of chars in a given string & returns the integer value
    }
    return intArray;
}


int main()
{
    char *test_array[] = {"This", "is", "the", "way"};//make a test array

    string_array *struct_array = malloc(sizeof(string_array));//malloc struct 
    struct_array->size = 4; //initialize a size inside struct to later assign it to test_array 
    struct_array->array = malloc(struct_array->size*sizeof(char));//malloc the array inside struct

    struct_array->array = test_array;//assign test array to array inside struct

    integer_array *intArray = my_count_on_it(struct_array);//int array that got returned from above is assigned to a new variable

    for(int i = 0; i < intArray->size; i++)
    {
        printf("%d/n", intArray->array[i]);//printing integer array
    }
  
    return 0; 
} 


