//calculate interest//
#include<stdio.h>
int main()
{
    float p,t,r,result;
    printf("enter your principle: ");
    scanf("%f",&p);
    printf("enter your Time: ");
    scanf("%f",&t);
    printf("enter your rate: ");
    scanf("%f",&r);
    result=(p*t*r)/100;
    printf("The Simple interest: %f",result);
    return 0;
}