// Three numbers sum and avg//
#include<stdio.h>
int main()
{
    int a,b,c,sum,avg;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    avg=(a+b+c)/3;
    printf("Sum : %d\nAvg:%d",sum,avg);
    return 0;
}