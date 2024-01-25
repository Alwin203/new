//WAP a program to check  whether a number is div by 5 or 11
#include<stdio.h>
int main()
{
   int a;
   printf("enter anynumber\n");
   scanf("%d",&a);
    if (a%5==0||a%11==0)
    {
        printf("the number is div by 5 or 11");

    }
    else
    {
        printf("its NOT DIVISIBLE");
    }





    return 0;
}