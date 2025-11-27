#include<stdio.h>
#include<stdlib.h>

#define SUCCESS 0
#define FAILURE -1

int findFactorial(int num){
    if(num == 0)return 1;
    return num * findFactorial(num - 1);
}

int main(){
    int num;
    printf("Enter the value of num: ");
    scanf("%d",&num);
    printf("The factorial of %d is %d",num,findFactorial(num));

    printf("\nThe space complexity is O(N)");
    printf("\nThe time complexity is O(N)\n");
    return SUCCESS;
}