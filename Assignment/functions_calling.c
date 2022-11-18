#include<stdio.h>

void arOfCircle()
{
	int r;
	printf("Enter the radius: \n");
	scanf("%d", &r);
	float area = 3.14*r*r;
	printf("The area of circle is : %f\n", area);
	float circumference = 2*3.14*r;
	printf("Circumference of circle is : %f",circumference);
}
void cube()
{
	int a;
	printf("Enter the value of side a : \n");
	scanf("%d", &a);
    int volumeOfCube = a*a*a;
    printf("Volume of cube = %d", volumeOfCube);
}
void add()
{
	int n1, n2;
	printf("Enter two numbers(n1,n2): ");
	scanf("%d %d", &n1,&n2);
	int addition = n1+n2;
	printf("Addition of %d and %d is : %d",n1,n2, addition);
}
void quotientOfNumber()
{
	int a, b;
    printf("Enter two numbers a and b : \n");
    scanf("%d %d", &a,&b);
    float r = a%b;
    float quotient = (a-r)/b;
    printf("The quotient of %d and %d is : %f \n",a,b, quotient);
}
int main()
{
	quotientOfNumber();
	arOfCircle();
	return 0;
}
