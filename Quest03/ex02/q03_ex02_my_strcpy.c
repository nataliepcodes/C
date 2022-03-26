#include <stdio.h>

char* my_strcpy(char* destination, char* source)
{
    while(*source)
    {
        *destination = *source;
        source++;
        destination++;
    }
    //*destination = '\0'; //TBC..works without this
    return destination;
}

int main()
{
    char dest[100] = {0};
    char *src = "abc";
    my_strcpy(dest, src);
    printf("my_strcpy -> %s\n", dest);

    return 0;
}




/*
The strcpy function is used to copy strings. 
It copies string pointed to by source into the destination . 
This function accepts two arguments of type pointer to char or array of 
characters and returns a pointer to the first string i.e destination .

Then the while loop is used which continues if the *source is not zero and inside while block, 
it stores the source values to target values using a pointer and incrementing both the values of source and the target by 1. 
At the end of the loop, the *target is initialized with null character i.e. \0.

*/