#include <stdio.h>

int my_mult(int nbr_1, int nbr_2)
{
    int mult;
    mult = nbr_1 * nbr_2;
    return mult;
}


int main()
{
    printf("->%d\n", my_mult(0, 1));
    printf("->%d\n", my_mult(10, 10));
    printf("->%d\n", my_mult(-10, 10));
    return 0;
}
