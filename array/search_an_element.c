#include<stdio.h>
int main(){
    int n;
    printf("Enter n: \n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
    printf("a[%d]: \n", i);
    scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        printf("a[%d]:%d\n", i,a[i]);
    }
    int target;
    printf("Enter target: \n");
    scanf("%d", &target);
    for(int i=0;i<n;i++){
        if(target==a[i]){
            printf("Yes %d is present\n", target);
            return 0;
        }
    }
    printf("%d is not present", target);

    return 0;
}
