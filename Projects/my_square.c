#include <stdio.h>
#include <stdlib.h>

/*
ac is the number of arguments passed to a program, including the program name itself.
av is an array containing each argument as a string of characters.
ac would be 3:
av[0] would be the string program (my_square)
av[1] would be the first string
av[2] would be the second string
*/


int main (int ac, char **av) 
{

    if(ac != 3)
    {
        return 0;
    } 
    
    /*
    atoi function converts integer value found in string into integer
    */

    int x = atoi(av[1]); //inner loop 
    int y = atoi(av[2]); //outer loop

    int i; //outer loop , y, column
    int j; //inner loop , x, row


    for(i = 1; i <= y; i++)
    { 
        for(j = 1; j <= x; j++)
        {
            if((j == 1 && (i == 1 || i == y)) || (j == x && (i == 1 || i == y)))
        {
            printf("o");
        } else if(((j > 1 && j < x) && (i == 1 || i == y))) 
        {
            printf("-");
        } else if(((j == 1 || j == x) && i > 1))
        {
            printf("|");
        } else
        {
            printf(" ");
        }

        } printf("\n");
    }
    
return 0;

}

