#include <stdio.h>

int my_is_negative(int nbr)
{
    if(nbr < 0)
    {
        return 0;
    } else {
        return 1;
    }
}

int main()
{
    printf("-> %d\n", my_is_negative(-1));
    printf("-> %d\n", my_is_negative(1));
    printf("-> %d\n", my_is_negative(0));
    printf("-> %d\n", my_is_negative(1337));

    return 0;
}

