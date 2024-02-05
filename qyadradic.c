//WAP that asks three co-efficeint of q eqn and calculates root // // 2nd try//
#include<stdio.h>
#include<math.h>
int main()
{
float a , b ,c, dis,root1,root2,real,imaginary,final1,final2;   //dis represents discriminant.//
printf("enter coefficient of a\n");
scanf("%f",&a);
printf("enter coefficient of b\n");
scanf("%f",&b);
printf("enter coefficient of c\n");
scanf("%f",&c);
dis = b*b -( 4* a*a*c);
if (dis>0)
{
    root1 = (-b+sqrt(dis))/(2*a);
    root2 = (-b-sqrt(dis))/(2*a);
    printf("root1 = %.2lf and root2 = %.2lf",root1,root2);

}
else if (dis == 0)
{
    root1 = root2 = -b/(2*a);
    printf("root 1 = root 2 = %.2lf:",root1);
}
else{
    real= -b/(2*a);
    imaginary= sqrt(-dis)/(2*a);
    printf("root 1 = %.2lf+%.2lf and root 2 = %.2lf - %.2lf",real,imaginary,real,imaginary);
}
    return 0;
}