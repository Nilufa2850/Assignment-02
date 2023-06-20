//Write a program to swap values of two int variables.

#include<stdio.h>
int main()
{
    int x, y ,m ;
    printf("Enter a number : ");
    scanf("%d%d",&x,&y);
    printf("\nx = %d and y = %d",x,y);
    
    m = x ;
    x = y ;
    y = m ;

    printf("\nx = %d and y = %d",x,y);
    return 0;
}
