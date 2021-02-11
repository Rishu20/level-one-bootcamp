//WAP to find the volume of a tromboloid using 4 functions.
#include<stdio.h>
float input(char a)
{
float n;
printf(" enter the dimensions of tromboliod %c:\n",a);
scanf("%f",&n);
}
float volume(float h,float d,float b)
{
    return ((h *d*b)+(d/b))/3 ;
}
void output(float v)
{
    printf("the volume of tromboliod is %f\n",v);
}
int main()
{
    float h,d,b,v;
    h=input('h');
    d=input('d');
    b=input('b');
    v=volume(h,d,b);
    output(v);
    return 0;
}
