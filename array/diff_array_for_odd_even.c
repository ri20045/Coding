#include<stdio.h>
int main(){
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("\na[%d]: ", i);
        scanf("%d",&a[i]);
    }

    int evenCount = 0, oddCount = 0;

    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            evenCount++;
        }
    }

    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            oddCount++;
        }
    }

    printf("\nEven Count: %d", evenCount);
    printf("\nOdd Count: %d", oddCount);

    int evenArray[evenCount];
    int oddArray[oddCount];

    int j = 0;
    for(int i = 0; i < n; i++){
        if(a[i]%2==0){
            evenArray[j] = a[i];
            j++;
        }
    }

    j = 0;
    for(int i = 0; i < n; i++){
        if(a[i]%2!=0){
            oddArray[j] = a[i];
            j++;
        }
    }

    printf("\nEven array: ");
    for(int i = 0; i < evenCount; i++){
        printf("%d ", evenArray[i]);
    }

    printf("\nOdd array: ");
    for(int i = 0; i < oddCount; i++){
        printf("%d ", oddArray[i]);
    }


    return 0;
}
