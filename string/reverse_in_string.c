#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
   
    printf("Type the string = \n");
    gets(str1);
    printf("str1: %s\n", str1);
    int j=0;
    for(int i=strlen(str1)-1;i>=0;i--,j++){
        str2[j]=str1[i];
    }
    printf("str2 is %s", str2);
    
    return 0;
}
