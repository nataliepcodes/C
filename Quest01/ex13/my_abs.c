#include <stdio.h>
#include <stdlib.h>

int my_abs(int nbr)
{
    return abs(nbr);
}

int main()
{
    int a = my_abs(-30);
    int b = my_abs(30);
    int c = my_abs(0);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;
} 

