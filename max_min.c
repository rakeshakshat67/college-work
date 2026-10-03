#include<stdio.h>
#include<math.h>
int main(){
    int x, y;
    printf("enter the numbers to be checked: ");
    scanf("%d,%d", &x, &y);
    if(x > y)
        printf("largest no. is %d\n", x);
    else if (x==y)
        printf("both are same number");
    else
    printf("largest no. is %d\n", y);
        
    return 0;
    
}