#include <iostream>
#include <stdio.h>
#include<stdbool.h>
int main()
{  
int Inputed_number;
float Mean, Sum;

//first Number
printf("Enter the first number: ");
scanf("%d", &Inputed_number);
Sum = Inputed_number;
//Second Number
printf("Enter the Second number: ");
scanf("%d", &Inputed_number);
Sum = Sum + Inputed_number;
printf("The sum of First and Second # is %.2f\n\n", Sum);

//Third Number
printf("Enter the Third number: ");
scanf("%d", & Inputed_number);
Sum = Sum + Inputed_number;
printf("The sum of First, Second and Third # is %.2f\n\n", Sum);

//Fourth Number
printf("Enter the Fourth number: ");
scanf("%d", &Inputed_number);
Sum = Sum + Inputed_number;
printf("The sum of First, Second, Third and Fourth # is %.2f\n\n", Sum);

//Fifth Number
printf("Enter the Fifth number: ");
scanf("%d", &Inputed_number);
Sum = Sum + Inputed_number;
printf("The sum of all inputted number # is %.2f\n\n", Sum);

//Display Mean value
Mean = Sum / 5;
printf("The mean of the inputted numbers is : %.2f", Mean);

return 0;
    
}

