#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];           
    printf("Enter str1: \n");
    gets(str1);
    printf("str1: %s\n", str1);
    int j=0;
    for(int i=strlen(str1)-1;i>=0;i--,j++){
        str2[j]=str1[i];
    }
    str2[j] = '\0';
    printf("str2: %s\n", str2);

    int res = strcmp(str1, str2);
    if(res == 0) {
        printf("palindrome");
    } else {
        printf("not palindrome");
    }

    return 0;
}
