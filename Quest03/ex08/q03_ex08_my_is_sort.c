#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array //defines a type integer_array
{
    int size;
    int* array;
} integer_array;
#endif


bool my_is_sort(integer_array * array)
{

    if (array->size == 1 || array->size == 0) //if array has one element or is empty
    {
        return true;
    }
    int i = 0;

    if(array->array[i] <= array->array[i + 1])//ascending: if first number is smaller than the next number
    {
        while(i < array->size - 1)//iterate through the array but do not include the last element
        {
            if(array->array[i] <= array->array[i + 1])//if first number is smaller than the next number
            {
                i++; 
            } else {
            return false;
            }
        }

    }

    if(array->array[i] >= array->array[i + 1])//descending: if first number is bigger than the next number
    {
        while(i < array->size - 1)//iterate through the array but do not include the last element
        {
            if(array->array[i] >= array->array[i + 1])//if first number is larger than the next number
            {
                i++;
            } else {
            return false;
            }
        }

    }
    return true;
        
}


int main()
{
    int array []= {1,2,3};

    integer_array array_struct = {
        .array = array, .size = 3 ,
    };

    printf("%d\n", my_is_sort(&array_struct));
    return 0;
}
