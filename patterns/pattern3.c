#include<stdio.h>
/*
5 4 3 2 1 
4 3 2 1 
3 2 1 
2 1 
1 
*/
int main(){
    int n;
    printf("Enter n: \n");
    scanf("%d", &n);
    int start = n;
    for(int i=1;i<=n;i++){
        for(int j=start;j>=1;j--){
            printf("%d ", j);
        }
        start--;
        printf("\n");
    }
    return 0;
}
