#include <stdio.h>
float areaOfCircle(float r)
{
	float area;
	area=3.14*r*r;
	return area;
}
int main(void) {
	int r;
	printf("Enter the radius= \n");
	scanf("%d", &r);
	printf("Area of circle is = %.2f ", areaOfCircle(r));
	return 0;
}
