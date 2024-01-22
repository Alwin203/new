//diff between int and float 
// NOTE wont be uploading for week or month due to exams
#include<stdio.h>
void main()
{
    float a,b,c;
    printf("enter first number \n");
    scanf("%f",&a);
    printf("enter second number \n");
    scanf("%f",&b);
    c=a/b;
    printf("in float the answer is %f\n in int the answer is %d",c,c);
    return 0;

}