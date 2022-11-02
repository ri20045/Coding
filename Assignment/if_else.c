#include<stdio.h>
int main(){
    int age,weight;
    printf("Enter the age: \n");
    scanf("%d", &age);
    printf("Enter the weight: \n");
    scanf("%d", &weight);
    if(age>18 && age<=55 && weight>45){
        printf("Person is eligible to donate");
    }
    else{
        printf("Person not eligible to donate");
    }
    return 0;
}
