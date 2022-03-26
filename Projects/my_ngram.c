#include <stdio.h>
#include <string.h>
#define MAX_ARRAY_SIZE 128

void fill_array(int *array, char *str)
{
int len = strlen(str);
    for(int i = 0; i < len; i++)//go through command line input/string
    {
        if(str[i] != '"' && str[0] || str[len])
        {
            array[str[i]] += 1;//add a count in the integer_array for each char in the string, fill int array
        }
    }   
}

void print_array(int *integer_array)
{
    for(int i = 0; i < MAX_ARRAY_SIZE; i++)
    {
        if(integer_array[i] > 0)//if value inside an array is more than 0, print i as character : number of occurence
        {
            printf("%c:%d\n", i, integer_array[i]);
        }
    }
}

int main(int ac, char **av)
{
    int integer_array[MAX_ARRAY_SIZE] = {0};//declare an array of ASCII size - 128 elements, initialize values to 0

    for(int i = 1; i < ac; i++)//loop through command line input/arguments - strings, starting from 1 to exlude the file name
    {
        fill_array(integer_array, av[i]);
    }

    print_array(integer_array);
    
    return 0;
}



