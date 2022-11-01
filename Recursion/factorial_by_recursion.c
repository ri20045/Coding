#include <stdio.h>
#include <string.h>
//factorial by recursion.
int factorial(n)
{   
    if(n==0) //take minimum possible value
    return 1;
    return n*factorial(n-1);
}
int main(){
    int n;
    printf("enter n = \n");
    scanf("%d", &n);
    int ans=factorial(n);
    printf("Factorial of %d is = %d \n", n,ans);
    return 0;
}
