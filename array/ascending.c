#include<stdio.h>
int main(){

	int arr[50];
	int n;
	printf("Enter n: \n");
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n - 1; i++) {
 
        // Find the minimum element in unsorted array
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index])
                min_index = j;
        }
        printf("min_index:%d\n", min_index);
 
        // Swap the found minimum element
        // with the first element
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
