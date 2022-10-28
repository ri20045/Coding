#include <stdio.h>

int main(void) {
	int n,i;
	printf("Enter n = \n");
	scanf("%d", &n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter the element = \n");
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i++){
		
		printf("%d \n", arr[i]);
	}
	return 0;
}
