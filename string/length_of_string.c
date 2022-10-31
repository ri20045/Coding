#include <stdio.h>
#include <string.h>

int main()
{
    char str[40];
    printf("Type the string = \n");
    gets(str);
    printf("The string is = %s\n", str);
    int length=0;
    length=strlen(str);
    printf("Length of string is = %d \n", length);
    return 0;
}
