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
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    printf("sum: %d", sum);
    return 0;
}
