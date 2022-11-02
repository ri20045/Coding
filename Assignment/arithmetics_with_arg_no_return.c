#include<stdio.h>
//arithmetic with argument no return.
void add(int a,int b){
    int sum=a+b;
    printf("sum of a and b: %d\n", sum);
}
void subtract(int a,int b){
    int subtraction=a-b;
    printf("subtraction of a and b: %d\n", subtraction);
}
int main(){
    int a,b;
    printf("Enter a and b: \n");
    scanf("%d %d", &a,&b);
    add(a, b);
    subtract( a, b);
    return 0;
}
