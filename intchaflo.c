//initializing float int and character//
#include<stdio.h>
int main()
{
    int a ;
    float b;
    char c;
    printf("enter the integer: ");
    scanf("%d",&a);
    printf("enter the character: ");
    scanf(" %c",&c);
    printf("enter the float: ");
    scanf("%f",&b);
    printf("the integer: %d\nthe character: %c\nthe floar: %f\n",a,c,b);
    return 0;
}