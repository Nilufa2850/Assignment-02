//Write a program to print a given number without its last digit.

#include<stdio.h>
int main()
{
    int x, y ;
    printf("Enter a number : ");
    scanf("%d",&x);
    y=x/10;
    printf("without last digit of %d is %d",x,y);
    return 0;
}
