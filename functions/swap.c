#include <stdio.h>
void swap(){
	int a,b,c;
	printf("Give value of a: \n");
	scanf("%d", &a);
	printf("Give value of b: \n");
	scanf("%d", &b);
	printf("Value of a before swap is: %d \n",a);
	printf("Value of b before swap is: %d \n", b);
	c=a;
	a=b;
	b=c;
	printf("Value of a after swap is: %d \n",a);
	printf("Value of b after swap is: %d \n", b);
}
int main(void) {
	swap();
	
	
	return 0;
}
