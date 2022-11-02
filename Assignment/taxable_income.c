#include<stdio.h>
int main(){
    char gender;
    int salary;
    char M;
    char F;
    printf("What is your gender (M/F): ");
    scanf("%c", &gender);
    printf("What is your salary: ");
    scanf("%d", &salary);
    if(gender=='M' && salary>=150000){
        printf("Salary is taxable");
    }
    else if(gender=='F' && salary>=180000){
        printf("Salary is taxable");
    }
    else{
        printf("Not taxable");
    }
    return 0;
}
