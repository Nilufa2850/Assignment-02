/*Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.*/

#include<stdio.h>
int main()
{
    int a , b , c , d ;
    printf("Enter a three digit number : ");
    scanf("%d",&a);

    b = a % 10 ;    // b = 123 % 10 = 3
    c = a / 10 ;    // c = 123 / 10 = 12
    d = 3 * 100 + c ;  // d = 300 + 12 = 312

    printf("digit = %d and Resulting = %d", a , d);


    return 0;
}
