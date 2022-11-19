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

	int index, value;
	printf("Enter index: \n");
	scanf("%d", &index);

	printf("Enter value: \n");
	scanf("%d", &value);

	for(int i = n-1;i>=index;i--) {
		arr[i+1] = arr[i];
	}

	arr[index] = value;
	n++;
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}

	return 0;
}
