#include <stdio.h>

char* my_strncpy(char* destination, char* source, int n_char)
{
    while(*source != '\0' && n_char--)
    {
        *destination = *source;
        source++;
        destination++;
    }

    return destination;
}

int main()
{
    char dest[100] = {0};
    char *src = "RaInB0w d4Sh! ";
    int character_n = 6;
    my_strncpy(dest, src, character_n);
    printf("my_strncpy -> %s\n", dest);//RaInB0

    return 0;
}


/*
The strncpy() function takes three arguments: dest, src and count. 
It copies a maximum of count characters from the string pointed to by src to the memory location pointed to by dest.

If count is less than the length of src, first count characters are copied to dest and it is not null terminated. If count is more than the length of src, all the characters from src is copied to dest and additional terminating null characters are added until a total of count characters have been written.

The behaviour is undefined if the strings overlap.

dest – This is a pointer to a character array where the set characters are stored after copy.
src – This pointer points to the character array from where the specified character arrays are copied.
n – the maximum number of characters to copy from the src string.


*/

