#include <stdio.h>
#include <unistd.h>


void my_putchar(char str) {
    write(1, &str, 1);
}

void my_putstr(char* str)
{
    char *p = str;
    while(*p != '\0')
    {
       my_putchar(*p);
       p++;
        
    }
    my_putchar('\n');
}

int main(void)
{
    my_putstr("abc");
    my_putstr("abcdelele dzp ll 0");
    my_putstr("");
   return 0;
}

/*

Input: "abc"
Output: abc
Return Value: nil

ex 2: 
Input: "abcdelele dzp ll 0"
Output: abcdelele dzp ll 0
Return Value: nil

ex 3:
Input: ""
Output: 
Return Value: nil

Tips
(In C)
Remember \0 is the End Of String
(In C)
To print a character you can use my_putchar

*/