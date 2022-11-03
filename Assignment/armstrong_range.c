#include<stdio.h>
int arms(int n){
    int rem,sum=0, temp = n;
    while(n>0){
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(sum == temp) {
        return 1;
    }

    return 0;
}
int main(){
    int n1,n2,n;
    printf("Range\n");
    printf("Enter n1: \n");
    scanf("%d", &n1);
    printf("Enter n2: \n");
    scanf("%d", &n2);
    for(int i=n1;i<=n2;i++){
        int res=arms(i);
        if(res == 1) {
            printf(" %d", i);
        }
    }
  
   
    return 0;
}
