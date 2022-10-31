#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[40];
    printf("Type the firstName = \n");
    gets(firstName);
    printf("firstName = %s\n", firstName);
    char lastName[40];
    printf("Type the lastName = \n");
    gets(lastName);
    printf("lastName = %s\n", lastName);


    return 0;
}
