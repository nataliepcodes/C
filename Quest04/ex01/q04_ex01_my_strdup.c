#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_strdup(char* str)
{
    /*initialising a duplicate string and a pointer to that string */
    char *str_copy; 
    char *result; 

    /*
    malloc returns a pointer to void. We should typecast it to the type 
    of the pointer. This is done by the (char *) 
    strlen(str)+1 is for the null character to terminate the string
    */

    str_copy = (char*)malloc(strlen(str)+1);

    /*
    Assigning a str_copy to result, to return it later. 
    The strdup() function returns a pointer to a new string
    */

    result = str_copy;

    if(str_copy == NULL)//if memory allocation failed
    {
        return NULL;
    }

    while(*str != '\0')//go to the end of the string
    {
        *str_copy = *str;//this copies the value of initial string
        str++;
        str_copy++;
    }

    *str_copy = '\0'; //terminating the copied string by zero
   
   return result;

}


int main()
{
    char *string;
    string = my_strdup("abc");
    return 0;
}


/*
The strdup() function returns a pointer to a new string which is
a duplicate of the string s.  Memory for the new string is
obtained with malloc(3), and can be freed with free(3).
*/