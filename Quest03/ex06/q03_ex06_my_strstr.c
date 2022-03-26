#include <stdio.h>
#include <string.h>

char* my_strstr(char* haystack, char* needle)
{
  /* if needle is empty */
  if (strlen(needle) == 0)
      {
          return haystack;
      }
    
      int i = 0;
      while(haystack[i] != '\0')//i < strlen(haystack
      {
        int k = i;
        int j = 0;
        while(haystack[k] == needle[j] && j< strlen(needle))
        {
          k++;
          j++;
        }
        if(needle[j] == '\0')//j == strlen(needle)
        {
          return &haystack[i];
        }
        i++;
      }
      return NULL;
}

int main()
{
    printf("->%s\n", my_strstr("hello", "ll"));//llo
    printf("->%s\n", my_strstr("a", ""));//a
    printf("->%s\n", my_strstr("a", "a"));//a
    printf("->%s\n", my_strstr("blah", "la"));//lah
    printf("->%s\n", my_strstr("aaa", "aaaa"));//null
    printf("->%s\n", my_strstr("codebugisawesome", "bug"));//bugisawesome
    printf("->%s\n", my_strstr("mississippi", "issipi"));//null

    return 0;
}




