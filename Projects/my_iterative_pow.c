#include <stdio.h>

int my_iterative_pow(int x, int y)
{
    if(y == 0)
    {
         return 1; //x^0 =1;
    }

    int result = 1;//declare and initialize a result

    while(y > 0)
    {
        if(y % 2 == 1)//if y is odd then multiply x with result
        {
            result = result * x;
        }
        y = y/2;
        x = x * x;
    }

    return result;
}


int main()
{
    int number = 2; 
    int power = 3;

    printf("%d^%d=%d\n", number, power, my_iterative_pow(number, power));

    return 0;
}


