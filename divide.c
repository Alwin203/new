#include<stdio.h>
int main()
{
    int a,b,div1,div2;
    printf("enter first number\n");
    scanf("%d",&a);
    printf("enter second number\n");
    scanf("%d",&b);
    div1 = a / b;
    div2 = b / a;
    printf("dividing %d by %d is %d \n dividing %d by %d is %d  %d ",a,b,div1,a,b,div2);
    return 0;
}