#include <stdio.h>
#include <string.h>

char* last_word(char* str)
{
    int i = 0;
    char *last_word;
    int len = strlen(str);
    int temp;

    if(str[0] == '\0')
    {
      return str;
    }

    while (str[i] != '\0')
    {
        if(str[i] <= 32 && str[i + 1] > 32 || str[i] == 44)//if a char is not a letter (e.g. space - ASCII 32) and next is a letter, or char is a comma
        {
            last_word = &str[i + 1];
        }
        i++;
    }

    int k = 0;
    
    while(last_word[k] != '\0')//go through the last word, fill the space
    {
        if(last_word[k] == 32)
        {
            last_word[k] = '\0';
        }

        k++;
    }


    return last_word;
}


int main()
{
    char str1[] = "FOR PONIES";//"PONIES"
    char str2[] = "this        ...       is sparta";//"sparta"
    char str3[] = "  lorem,ipsum  ";//"ipsum"
    char str4[] = "";//""

    printf("%s\n", last_word(str1));
    printf("%s\n", last_word(str2));
    printf("%s\n", last_word(str3));
    printf("%s\n", last_word(str4));

    return 0;
}

//https://stackoverflow.com/questions/10179622/how-to-read-second-and-last-words-from-each-line-in-c
//https://stackoverflow.com/questions/9219940/traversing-c-string-get-the-last-word-of-a-string

/*
Description
Write a program that takes a string and displays its last word followed by a
.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

Example 00:

Input: "FOR PONIES"
Output: "PONIES"
Example 01:

Input: "this        ...       is sparta"
Output: "sparta"
Example 02:

Input "  lorem,ipsum  "
Output: "ipsum"
Example 03:

Input ""
Output: ""


char* last_word(char* param_1)
{

}


*/