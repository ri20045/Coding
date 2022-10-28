#include <stdio.h>

int main(void) {
	int a;
	printf("Enter a = \n");
	scanf("%d", &a);
	
	int n,factorial=1,i;
	int b,reverse=0;
	switch(a){
		case 1:
			
			printf("Enter the number n = \n");
			scanf("%d", &n);
			for(i=1;i<=n;i++){
				factorial=factorial*i;
			}
			printf("Factorial of %d is = %d \n", n,factorial);
			break;
			
		case 2:
			
			printf("Enter the number b = \n");
			scanf("%d", &b);
			while(b>0){
				reverse=reverse*10+b%10;
				b=b/10;
			}
			printf("reverse of %d is = %d \n", b,reverse);
	}
	return 0;
}
