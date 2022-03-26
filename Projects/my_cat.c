#include <stdio.h>
#include <stdlib.h> //for exit(1)

int main(int argc, char** argv)
{
    FILE *fp; //pointer to file

    fp = fopen(argv[1],"r");//r is to read, w is to write, a is to append

    if(!fp || argc < 2) //no file or argcount is not 2
    {
        printf("ERROR\n");
        exit(1);
    }

    char ch;
    while((ch = fgetc(fp)) != EOF)//infinite loop printing characters until the end of the file
    {
      printf("%c", ch);
    }

    fclose(fp);
}



