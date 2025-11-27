#include<stdio.h>
#include<stdlib.h>

#define FAILURE -1
#define SUCCESS 0

int cubeOfFirstN(int n){
    int sum = (n * n * (n + 1) * (n + 1)) / 4;;
    return sum;
}

int main(){
    int num;
    printf("Enter the value of N: ");
    scanf("%d",&num);
    printf("The value of sum of cubes of first %d natural numbers is %d\n",num,cubeOfFirstN(num));
    printf("The time complexity is: O(1)");
    printf("\nThe space complexity is: O(1)\n");
    return SUCCESS;
}