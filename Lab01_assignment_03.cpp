#include <iostream>
#include <stdio.h>
#include<stdbool.h>
int main()
{ 

printf("Enter the number to reverse: ");

start://program will go back here when the user enter less or more than 3 digits 
int Num, remainder, count = 0, Rev_num = 0;
scanf("%d", &Num);

 while (Num != 0){

        remainder = Num % 10;
        Rev_num = Rev_num * 10 + remainder;
        Num = Num/10;
        //count the lenght of integers. 
        count++;
    } 

    if(count == 3){
        printf("The reversed number is: %d", Rev_num);
    }
    else{
        printf("Enter 3 digits only: ");
        goto start;
    }

    return 0;

}