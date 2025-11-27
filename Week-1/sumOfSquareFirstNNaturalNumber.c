#include<stdio.h>
#include<stdlib.h>

#define SUCCESS 0
#define FAILURE -1

int main(){
    int num;
    printf("Enter the value for N: ");
    scanf("%d",&num);
    int sum = (num * (num + 1)* (2*num + 1))/6; 
    printf("The square of first %d natural numbers is %d\n",num,sum);
    printf("The space complexity is O(1)");
    printf("\nThe time complexity is O(1)\n");
    return SUCCESS;
}