#include <stdio.h>

char* alpha_mirror(char* str)
{
    char *p = str;

    while(*p != '\0')
    {
        if(*p >= 'a' && *p <= 'z')
        {
            *p = 'z' - (*p - 'a');
        } else if(*p >= 'A' && *p <= 'Z')
        {
            *p = 'Z' - (*p - 'A');
        }
        p++;
    }
    return str;
}

int main()
{
    char str1[] = "abc";
    char str2[] = "My horse is Amazing.";
    char str3[] = "";

    
    printf("%s\n", alpha_mirror(str1));//"zyx"
    printf("%s\n", alpha_mirror(str2));//"Nb slihv rh Znzarmt."
    printf("%s\n", alpha_mirror(str3));//""

    return 0;
}
