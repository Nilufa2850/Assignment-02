/*Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/

#include<stdio.h>
int main()
{
    int x , y , p , q ;
    printf("Enter three & one digit number : ");
    scanf("%d%d",&x,&y);

    p = x*10 ;      // p = 234*10 = 2340
    q = p+y ;

    printf("x = %d y = %d Resulting = %d", x,y,q);
    return 0;
}
