#include<stdio.h>
#include<stdlib.h>

#define SUCCESS 0
#define FAILURE -1

int main(){
    int arr[3][3];
    printf("Accepting values for original 3X3 matrix...\n");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("Enter the value for A[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Printing the original...\n");
    for(int i = 0;i<3;i++){
        for(int j =0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Priting the transpose...\n");
    for(int i = 0;i<3;i++){
        for(int j =0;j<3;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }

    return SUCCESS;
}