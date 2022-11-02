#include<stdio.h>
int main(){

    int n;
    printf("Enter the no. of pages: \n");
    scanf("%d", &n);

    //Rs3/page
    int totalCostTyping=3*n;
    printf("Cost of typing %d pages: $%d\n", n,totalCostTyping);

    //1st copy-Rs5...later copies-Rs 3
    int totalCostPrint=5+3*(n-1);
    printf("Cost of printing %d pages is: $%d\n", n,totalCostPrint);

    int total=totalCostTyping+totalCostPrint;
    printf("Total cost is: $%d", total);
    return 0;
}
