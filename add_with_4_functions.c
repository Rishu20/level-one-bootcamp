//Write a program to add two user input numbers using 4 functions.
#include <stdio.h>
int data()
 {
    int a; 
    printf("Enter the number: ");
    scanf("%d",&a);
    return a;
  }
   int calc(int a, int b)
   {
     int sum;
     sum = a+b;
     return sum;
    }
     void output(int a, int b, int c)
     {
       printf("Sum of %d + %d is : %d",a,b,c);
      }

 int main()
 {
    int x,y,z;
    x=data();
    y=data();
    z=calc(x,y);
    output(x,y,z);
    return 0;
 }
