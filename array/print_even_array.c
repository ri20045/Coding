#include<stdio.h>
int main(){
    int n;
    printf("Enter size: \n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){ 
        printf("a[%d]: \n", i);
        scanf("%d", &a[i]);
    }
    printf("Even nos. are: \n");
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            printf("%d\n", a[i]);
        }
    }
    return 0;
}
