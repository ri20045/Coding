#include<stdio.h>
/*
1 
1 0 
1 0 1 
1 0 1 0 
1 0 1 0 1
*/
int main(){
    int n;
    printf("Enter n: \n");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j%2==0){
                printf("0 ");
            }
            else{
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}
