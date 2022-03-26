#include <stdio.h>

int my_add(int nbr_1, int nbr_2)
{
    int sum;
    sum = nbr_1 + nbr_2;
    return sum;
}

int main()
{
    printf("Sum is: %d\n", my_add(0, 1));
    printf("Sum is: %d\n", my_add(10, 10));
    printf("Sum is: %d\n", my_add(-10, 10));
    return 0;
}