int main()
{
    int day,year=0,month=0;
    printf("enter your total days: ");
    scanf("%d",&day);
    if (day>=365)
    {
        year = year +1;
        day = day - 365;
        if (day>=30) 
         {
        month = month +1;
        day = day-30;     
        }

    }
    if (day>=30)
    {
        month = month +1;
        day = day-30;

    }
        printf("%d year %d month %d days",year,month,day);
    return 0;
}