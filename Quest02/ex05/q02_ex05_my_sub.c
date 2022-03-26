#include <stdio.h>

int my_sub(int nbr_1, int nbr_2)
{
    int sub;
    sub = nbr_1 - nbr_2;
    return sub;
}

int main()
{
    printf("Sum is: %d\n", my_sub(0, 1));
    printf("Sum is: %d\n", my_sub(10, 10));
    printf("Sum is: %d\n", my_sub(-10, 10));
    return 0;
}
