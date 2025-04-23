#include<stdio.h>
#include<conio.h>
int main ()
{   
    int radius;
    printf("enter value of r");
    scanf("%d",&radius);
    int PI = 3.14;
    int area =(PI*radius*radius);
    printf("area of circle is %d :", area);
    return 0;
}