#include<stdio.h>
int main(){
    int x;
    printf("enter a number to be checked: ");
    scanf("%d", x);
    if (x % 2 == 0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}