//Write a program to add two user input numbers using one function.
#include <stdio.h>
int main() 
{
    int sum=0,n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int A[n];
    printf("Enter elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+A[i];
    }
    printf("The sum is: %d",sum);
    return 0;
}
