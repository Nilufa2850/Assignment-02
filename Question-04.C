//Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>
int main()
{
    int x, y ;
    printf("Enter a number : ");
    scanf("%d%d",&x,&y);
    x = x + y ;
    y = x - y ;
    x = x - y ;
    printf("x = %d and y = %d",x,y);
    return 0;
}
