#include <stdio.h>

void my_swap(int* integer_1, int* integer_2)
{
    int temp;
    temp = *integer_1;
    *integer_1 = *integer_2;
    *integer_2 = temp;
}

int main() {
  int variable_a = 12;
  int variable_b = 21;

  printf("A - %d ** B - %d\n", variable_a, variable_b); // will print A - 12 ** B - 21
  
  my_swap(&variable_a, &variable_b);
  
  printf("A - %d ** B - %d\n", variable_a, variable_b); // will print A - 21 ** B - 12
  return 0;
}