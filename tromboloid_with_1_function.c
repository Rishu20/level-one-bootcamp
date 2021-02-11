//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
    float h,d,b,volume;
    printf("Enter the dimensions of tromboloid: ");
    scanf("%f %f %f",&h,&d,&b); 
    volume=(0.33*((h*d*b)+(d/b)));
    printf("Volume of tromboloid is %f", volume);
    return 0;
}
