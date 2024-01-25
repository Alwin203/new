//WAP to check whether the number is prime or composite
#include<stdio.h>
int main()
{
    int a , i,sum=0;
    printf("enter any number ");
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        if (a%i==0)
        {
            sum = sum +1;
        }

    }
    if (sum<=2)
    {
        printf("%d is prime",a);
    }
    else
    {
        printf("%d is composite",a);
    }
    return 0;
    
}