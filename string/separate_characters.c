#include <stdio.h>
#include <stdlib.h>


void main()
{
    char str[100]; 
    int i= 0;
       printf("enter the string : ");
       fgets(str, sizeof str, stdin);
	   printf("The string is : \n");
    while(str[i]!='\0')
    {
       printf("%c  ", str[i]);
      i++;
    }
    printf("\n");
}
