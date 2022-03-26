#include <stdio.h>
#include <stdlib.h> 

//Option with for loop
int* my_range(int min, int max)
{

int *array;

//defines the range: how many elements are between the two numbers, so many will be printed, e.g. 1&&4 would return 3elements
int size = max - min;

array =(int *)malloc(size*sizeof(int));

if(min >= max)
{
    return NULL;
}
   
for(int i = 0; i < size; i++)
{
    array[i] = min;//min number is assigned as firststarts the loop
    min++;
} 
    return array;
    
}


/*
//Option with while loop
int* my_range(int min, int max)
{

int *array;
int size = max - min;
int i = 0;

array =(int *)malloc(size*sizeof(int));

if(min >= max)
{
    return NULL;
}
    
while(min < max)
{
    array[i] = min;
    min++;
    i++;
}
    return array;
}
*/



int main()
{
    int min = 1;
    int max = 4;
    int *array = my_range(min, max);

    return 0;
}



