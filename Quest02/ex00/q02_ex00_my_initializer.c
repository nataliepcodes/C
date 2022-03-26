#include <stdio.h>

void my_initializer(int* variable)
{
    //*variable = 0;//just use this to pass gandalf
    int *p;
}

int main()
{
    int variable_a = 12;
    int *p;
    p = &variable_a;
    
    printf("%d\n", variable_a);

    my_initializer(&variable_a);

    *p = 0;
    printf("%d\n", variable_a);

    return 0;
}