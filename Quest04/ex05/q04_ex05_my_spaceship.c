#include <stdio.h>
#include <string.h>
#include <stdlib.h> //for malloc

char* my_spaceship(char* instructions)
{
  int x = 0;
  int y = 0; 
  char *direction = "up"; //pointer to direction[0]

  for(int i = 0; i < strlen(instructions); i++)
  {
    if(instructions[i] == 'R')
    {
      switch(*direction)
      {
        case 'l': 
                  direction = "up"; 
                  break;
        case 'r': 
                  direction = "down";
                  break ;
        case 'u':
                  direction = "right";
                  break;
        case 'd':
                  direction = "down";
                  break;
      }
    }
    if(instructions[i] == 'L')
    {
      switch(*direction)
      {
        case 'l': 
                  direction = "down"; 
                  break;
        case 'r': 
                  direction = "up";
                  break ;
        case 'u':
                  direction = "left";
                  break;
        case 'd':
                  direction = "right";
                  break;
      }
    }
    if(instructions[i] == 'A')
    {
      switch(*direction)
      {
        case 'l': 
                  x--; 
                  break;
        case 'r': 
                  x++;
                  break ;
        case 'u':
                  y--;
                  break;
        case 'd':
                  y++;
                  break;
      }
    }
  }
  
  char *final_coordinates;
  final_coordinates = malloc(sizeof(char)*100);
  sprintf(final_coordinates, "{x: %d, y: %d, direction: '%s'}", x, y, direction);

  return final_coordinates;
  //printf("x: %d, y: %d, direction: %s\n", x, y, direction);
}

int main()
{
  my_spaceship("RAALALL");//Return Value: "{x: 2, y: -1, direction: 'down'}"
  my_spaceship("AAAA");//Return Value: "{x: 0, y: -4, direction: 'up'}"
  my_spaceship("RAARA");//Return Value: "{x: 2, y: 1, direction: 'down'}"
  my_spaceship("");//Return Value: "{x: 0, y: 0, direction: 'up'}"

  return 0;

}

