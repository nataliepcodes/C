#include <stdio.h>
#include <unistd.h>


void my_putchar(char c) {
  write(1, &c, 1);
}

void my_print_reverse_alphabet(void)
{
    char letter;
    for (letter = 'z'; letter >= 'a'; letter--)
    {
        my_putchar(letter);
    }
     my_putchar('\n');
}


int main()
{
    my_print_reverse_alphabet();    
    return 0;
}
