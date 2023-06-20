//Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
    int p,q,x,y,z,sum;
    printf("Enter a three digit number : ");
    scanf("%d",&p);  // p = 123
    
    x = p / 100 ;    // x = 123/100 = 1.23 = 1 [1st digit] (int type) 
    q = p / 10 ;     // q = 123/10 = 12.3 = 12
    y = q % 10 ;     // y = 12 % 10 = 2 [2nd digit]
    z = p % 10 ;     // z = 123 % 10 = 3 [3rd digit]

    sum = x+y+z ;


    printf("Sum of the three digit no. %d is %d",p,sum);
    return 0;
}
