//convert celsius temp into fahrenheit//
#include<Stdio.h>
int main()
{
    float cel,fer;    //cel means celsius fer means fahrenheit//
    printf("enter the temperature in celsius: ");
    scanf("%f",&cel);
    fer = (cel*9/5)+32;
    printf("Temperature in Celsius: %f",fer);
    return 0;

}