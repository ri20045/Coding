#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[40];
    printf("Type the firstName = \n");
    gets(firstName);
    puts(firstName);
    char lastName[40];
    printf("Type the lastName = \n");
    gets(lastName);
    puts(lastName);
    strcat(firstName, lastName);
    printf("Concatenated name is = \n");
    puts(firstName);


    return 0;
}
