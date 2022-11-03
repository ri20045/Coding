#include<stdio.h>
//display prime numbers
int prime(int n){
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n1,n2;
    printf("Enter the range: \n");
    printf("n1: \n");
    scanf("%d",&n1);
    printf("n2: \n");
    scanf("%d",&n2);
    printf("\nprime numbers: ");
    for(int i=n1;i<=n2;i++){
        int res = prime(i);
        if(res == 1) {
            printf(" %d", i);
        }
    }
 return 0;
}
    
    
