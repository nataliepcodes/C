#include <stdio.h>

int my_get_seven(); //function declaration

int main ()//function call
{
    printf("%d\n", my_get_seven());
    return 0;
}

int my_get_seven() // function definition (statement + return)
{
    int a = 7;
    return a;
}