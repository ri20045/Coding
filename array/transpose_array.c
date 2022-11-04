#include<stdio.h>
int main(){
    int rows,cols;
    printf("enter rows: \n");
    scanf("%d", &rows);
    printf("enter cols: \n");
    scanf("%d", &cols);

    int a[rows][cols];

    printf("enter values for array a: \n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(i<j){
                int temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }   
        }
    }

    printf("transpose: \n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
