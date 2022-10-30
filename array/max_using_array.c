#include <stdio.h>
int main()
{
    long n;
    
    printf("Enter the size = \n");
    scanf("%ld", &n);
    long a[n];
    for(long i=0;i<n;i++){
        printf("Enter the element = \n");
        scanf("%ld", &a[i]);
    }
    long max=a[0];
    for(long i=1;i<n;i++){
        if(a[i]>max)
            max=a[i];
    }
    printf("%ld is maximum", max);
    return 0;
}
