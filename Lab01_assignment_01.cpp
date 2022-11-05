#include <iostream>
#include <stdio.h>
#include<stdbool.h>
int main()
{  
int hour, Minute, entered ;
float Second;
printf("Enter Hours: ");

jumpHour:
scanf("%d", &hour);//Checking hours
if(hour >= 1 && hour <= 24)
{

    printf("Enter Minutes: ");//Checking minutes value
    
    Min:
    scanf("%d", &Minute);
    if(Minute <= 60 && Minute >= 1)
    {
        printf("Enter Second: ");  //Checking seconds value
    
        Sec:
        scanf("%f", &Second);
        if(Second <= 60 && Second >= 1)
        {
            printf("The entered time is: %d hour/s %d minute/s and %f second/s.", hour, Minute, Second);
            return 0;
        }
        else
        {
            printf("Enter Seconds again incorrect value: ");
            goto Sec;  
        } //End for seconds code
    }
    else
    {
        printf("Enter Minutes again incorrect value: ");
        goto Min;  
    }//End for minutes code
}
else
{
    printf("Enter Hours again incorrect value: ");
    goto jumpHour;  
}
//End of code
    
}
