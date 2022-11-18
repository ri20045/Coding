#include <stdio.h>

int main(void) {
float fahrenheit;
	printf("Enter the temperature in fahrenheit : ");
	scanf("%f", &fahrenheit);
	float celcius = (fahrenheit - 32)*5/9;
	printf("The converted value is : %f", celcius);
	return 0;
}
