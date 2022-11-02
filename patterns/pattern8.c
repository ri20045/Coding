#include<stdio.h>
/*
    1
   222
  33333
 4444444
555555555
*/
int main(){
    int n;
    printf("Enter n: \n");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=(i*2-1);j++){
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
