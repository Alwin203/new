//subtraction of number//
#include<stdio.h>
int main()
{
int a , b , sub1,sub2;
printf("enter a number \n");
scanf("%d",&a);
printf("enter b number \n");
scanf("%d",&b);
sub1 = a-b;
sub2 = b-a;
printf("%d - %d = %d \n %d - %d = %d",a,b,sub1,a,b,sub2);
    return 0;
}