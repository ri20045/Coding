#include <stdio.h>
float simpleInterest(float p, float r, float t)
{
	float SI;
	SI=(p*r*t)/100;
	return SI;
}
int main(void) {
	float p,r,t;
	printf("Enter the principal= \n");
	scanf("%f", &p);
	printf("Enter the rate= \n");
	scanf("%f", &r);
	printf("Enter the time= \n");
	scanf("%f", &t);
	printf("Simple Interest = $%.2f ", simpleInterest(p,r,t));
	return 0;
}
