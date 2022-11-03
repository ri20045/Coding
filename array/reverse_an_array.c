#include<stdio.h>
int main(){
    int n;
    printf("Enter n: \n");
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter the element: \n");
        scanf("%d", &a[i]);
    }
    printf("Reverse: \n");
    for(int i=n-1;i>=0;i--){
        printf("%d ", a[i]);
    }
    return 0;
}
