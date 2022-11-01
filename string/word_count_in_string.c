#include <stdio.h>
#include <string.h>
int main()
{
   char str[100];
   int count=0;
   printf("Type the string = \n");
   gets(str);
   printf("%s\n", str);
   for(int i=0;i<strlen(str);i++){
    if(str[i]==' '){
        count++;
    }
   }
   printf("No. of words is = %d", count+1);

    return 0;
}
