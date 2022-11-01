#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
   
    printf("Type the string = \n");
    gets(str1);
    printf("str1: %s\n", str1);
  
    int i=0,j=0;
    for(int i=strlen(str1)-1;i>=0;i--,j++) {
        str2[j] = str1[i];
    }

    printf("str2: %s\n", str2);

    for(int i=0;i<strlen(str1);i++) {
        if(str1[i]!=str2[i]) {
            printf("not palindrome");
            return 0;
        }
    }

    printf("palindrome");
    
    return 0;
}
