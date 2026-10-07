#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number to be checked: ");
    scanf("%d", &num);
    if(num > 0)
    {
        printf("The number is positive.\n");
    }
    else if(num < 0)
    {
        printf("The number is negative.\n");
    }
    else
    {
        printf("The number is zero.\n");
    }

}