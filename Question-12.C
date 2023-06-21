/*Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/

#include<stdio.h>
int main()
{
    float INR , USD ;

    printf("Enter the amount in INR : ");
    scanf("%f",&INR);

    USD = INR / 76.23 ;
    printf("%f INR = %f USD", INR,USD);

    return 0;
}
