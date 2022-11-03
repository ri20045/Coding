#include<stdio.h>
int main(){
    int n;
    printf("Enter n: \n");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            printf("number is not prime");
            return 0;
        } 

    }
    printf("Number is prime");
 return 0;
}
    
    
