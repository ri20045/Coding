#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter size of array = \n");
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter the element = \n");
        scanf("%d", &a[i]);
    }
    float sum=0;
    for(int i=0;i<n;i++){
     sum += a[i];
}
float avg = sum/n;
    printf("The average of a is = %f",avg);
    return 0;
}
