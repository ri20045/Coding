#include<stdio.h>
int main(){
    int rows,cols;
    printf("enter rows: \n");
    scanf("%d", &rows);
    printf("enter cols: \n");
    scanf("%d", &cols);

    int a[rows][cols];
    int b[rows][cols];
    int ans[rows][cols];

    printf("enter values for array a: \n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter values for array b: \n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d", &b[i][j]);
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            ans[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("result: \n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
