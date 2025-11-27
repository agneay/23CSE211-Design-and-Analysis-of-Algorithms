#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1

int main()
{
    int num;
    printf("Enter the value of N: ");
    scanf("%d", &num);
    int sum = ((num) * (num + 1))/ 2;
    printf("The sum of %d numbers is: %d\n", num, sum);

    printf("The space complexity is O(1)");
    printf("\nThe time complexity is O(1)\n");
    return SUCCESS;
}