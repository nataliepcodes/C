#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int my_string_index(char* str, char letter)
{
   //char *p = str;
    
    for(int i = 0; i < strlen(str); i++)
	{
			if(str[i] == letter)
			{
				return i;
			}
		
	}
	return -1;
}



int main()
{
    
    printf("%d\n", my_string_index("hello", 'l'));//2
    printf("%d\n", my_string_index("aaaaa", 'b'));//-1
    printf("%d\n", my_string_index("hello", 's'));//-1

    return 0;
}

