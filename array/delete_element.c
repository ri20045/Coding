#include<stdio.h>
int main(){

	int arr[50];
	int n;
	printf("Enter n: \n");
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}

	int index;
	printf("Enter index: \n");
	scanf("%d", &index);

	for(int i = index+1;i<n;i++) {
		arr[i-1] = arr[i];
	}

	n--;
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}

	return 0;
}
