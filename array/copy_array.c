#include <stdio.h>
int main(){
    int n;
    printf("Enter size of array = \n");
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter element = \n");
        scanf("%d",&a[i]);
    }
    printf("Elements of a\n");
    for(int i=0;i<n;i++){
        printf("a[%d] = %d\n", i, a[i]);
        
    }
    printf("Elements of b\n");
    int b[n];
    for(int i=0;i<n;i++){
        b[i]= a[i];
        printf("b[%d] = %d\n", i, b[i]);
   }


    return 0;
}
