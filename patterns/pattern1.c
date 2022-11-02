#include<stdio.h>
/*
A 
B C 
D E F 
G H I J 
K L M N O
*/
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    char start='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c ", start);
            start++;
        }
        printf("\n");
    }
    return 0;
}
