//calculate the percentage obtained from five subjects//
//2nd try
#include<stdio.h>
int main()
{
    char fname[15];
    char lname[15];
    int rollno;
    float marks[5],per;
    printf("enter first name:\n");
        scanf("%s",fname);
    printf("enter last name:\n");
    scanf("%s",lname);
    printf("Enter Roll No:\n");
    scanf("%d",&rollno);
    for (int i=0;i<5;i++)
    {
        printf("enter marks obtained in the subject number %d\n",i+1);
        scanf("%f",&marks[i]);
    }
per = ((marks[0]+ marks[1]+marks[2]+ marks[3]+marks[4])/500)*100;//used this in firstattempt
printf("Name : %s %s\n",fname,lname);
printf("Roll NO : %d\n",rollno);
printf("Percentage : %.2f\n",per);
    return 0;
}