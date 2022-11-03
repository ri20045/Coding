#include<stdio.h>

void fibonacci(int N){

    int n1=0,n2=1,ans;
    
    printf("1");
    for(int i=1;i<=N;i++)
    {
        ans=n1+n2;
        n1=n2;
        n2=ans;
        
        printf(" %d ",ans);
    }
}
    int main(){
        int N;
        printf("Enter N: \n");
        scanf("%d",&N);
        fibonacci(N);
    
    return 0;
}
