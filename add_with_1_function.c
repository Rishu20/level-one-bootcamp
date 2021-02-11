//Write a program to add two user input numbers using one function.
#include<stdio.h>
 
int main() {
   int a, b, sum;
 
   printf("\nEnter no.s you want to add: ");
   scanf("%d %d", &a, &b);
 
   sum = a + b;
 
   printf("Sum : %d", sum);
 
   return(0);
}
