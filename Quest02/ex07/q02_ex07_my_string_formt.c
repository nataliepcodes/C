#include <stdio.h>
#include <string.h>

void my_string_formatting(char* firstname, char* lastname, int age)
{
    char *pointer_1 = firstname;
    char *pointer_2 = lastname;
    printf("Hello, my name is %s %s, I'm %d.\n", pointer_1, pointer_2, age);
}


int main()
{
    my_string_formatting("john", "doe", 37); 
    my_string_formatting("Baby", "Yoda", 50);     
    my_string_formatting("Marie", "Curie", 26);  
    return 0;
}
