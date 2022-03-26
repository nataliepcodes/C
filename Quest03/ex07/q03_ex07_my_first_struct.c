
#include <stdio.h>
#include <stdlib.h>

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY 

typedef struct s_integer_array
{
    int size;
    int* array;
}integer_array;
#endif


void my_first_struct(integer_array* array)
{
    printf("%d\n", array->size);

    for(int i = 0; i < array->size; i++)
    {
       printf("%d\n", array->array[i]);
    }
    
}


int main()
{
    int array [] = {10, 2, 3, 3, 0, -1};
    integer_array array_dot = {
        .array = array, .size = 6,
    };
   
    my_first_struct(&array_dot);

    return 0;
}



int main()
{
    int array [] = {10, 2, 3, 3, 0, -1}; 

    int *pArray;
    pArray = array;//?? no &??
   
    int size = 6;
    printf(" %d\n", size);
    printf(" %p\n", pArray);

    for(int i = 0; i < 6; i++)
    {
       printf(" %d\n", pArray[i]);
    }
    return 0;
}


