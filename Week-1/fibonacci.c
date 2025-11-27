#include<stdio.h>
#include<stdlib.h>

#define SUCCESS 0
#define FAILURE -1


int main(){
    int limit;
    printf("Enter the range limit for fibonacci: ");
    scanf("%d",&limit);
    int a = 0,b = 1;
    int c;
    printf("%d %d ",a,b);
    while(limit >= 0){
        c = a + b;
        printf("%d ",c);
        a = b;
        b = c;
        limit--;
    }
    printf("\n");
    printf("The time complexity is: O(N)");
    printf("The space complexity is: O(1)");
    return SUCCESS;
}