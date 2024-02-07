//calculate area and perimeter of circle//
#include<stdio.h>
int main()
#define PI 3.1415
{
    int r,area,peri; //perimeter means peri//
    printf("enter the radius of circle:");
    scanf("%d",&r);
    peri = 2*PI*r;
    area = PI*r*r;
    printf("Area: %d\nPerimeter:%d\n",area,peri);
    return 0;
}