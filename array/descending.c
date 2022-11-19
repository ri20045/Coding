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
 
        // Find the maximum element in unsorted array
        int max_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_index])
                max_index = j;
        }
        printf("max_index:%d\n", max_index);
 
        // Swap the found maximum element
        // with the first element
        int temp = arr[i];
        arr[i] = arr[max_index];
        arr[max_index] = temp;
    }

	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
