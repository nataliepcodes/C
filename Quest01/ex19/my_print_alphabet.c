#include <stdio.h>
#include <unistd.h>

//Option 1
void my_putchar(char c) {
  write(1, &c, 1);
}


void my_print_alphabet(void)
{
    char letter;
    for (letter = 'a'; letter <= 'z'; letter++)
    {
      my_putchar(letter);
    }
     my_putchar('\n');
}


int main()
{
    
    printf("%c\n", my_print_alphabet());
        
    return 0;
}

/* Option 2
void my_print_alphabet(char c)
{
    putchar(c);
}


int main()
{
    char letter;
    letter = 'a';
    for (letter = 'a'; letter <= 'z'; letter++)
    my_print_alphabet(letter);    
    return 0;
}
*/

