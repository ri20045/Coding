#include <stdio.h>
int main()
{
    int n;
    
    printf("Enter the size = \n");
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter the element = \n");
        scanf("%d", &a[i]);
    }
    int min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min)
            min=a[i];
    }
    printf("%d is minimum", min);
    return 0;
}
