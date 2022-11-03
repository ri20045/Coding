#include<stdio.h>
int prime(int n){
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            return 0;
        }
        
    }
    return 1;
} 
int main(){
    int n;
    printf("Enter n: \n");
    scanf("%d", &n);
    int ans=prime(n);
    if(ans==0){
        printf("%d is not prime", n);
    }
    else if(ans==1){
        printf("%d is prime",n);
    }

     return 0;
    
    
}
