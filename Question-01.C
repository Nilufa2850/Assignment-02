//Write a program to print unit digit of a given number.

#include<stdio.h>
int main()
{
    int x, y ;
    printf("Enter a number : ");
    scanf("%d",&x);
    y=x%10;
    printf("Unit digit of %d is %d",x,y);
    return 0;
}
