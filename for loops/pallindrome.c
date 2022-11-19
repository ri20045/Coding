#include<stdio.h>
int main(){

	int n,reverse=0;
	printf("Enter n: \n");
	scanf("%d", &n);
	int temp=n;
	while(n>0){
	reverse=reverse*10+n%10;
	n=n/10;
}
	printf("%d", temp);
	printf("Reversed number is: %d\n", reverse);
	if(reverse==temp){
		printf("is pallindrome");
	}
	else{
		printf("not pallindrome");
	}
	return 0;
}
