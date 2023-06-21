/*Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/

#include<stdio.h>
int main()
{
    int x , y , z ;
    printf("Enter a four digit number : ");
    scanf("%d",&x);

    y = x/10 ;     // y = 2345/10 = 234 
    z = y*10 ;     // z = 234*10 = 2340

    printf("x = %d", z);
    return 0;
}
