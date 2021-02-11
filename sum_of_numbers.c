//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>
int main() 
{
    int A[10],sum=0,n;
    printf("Enter number of elements:");
    scanf("%d",&n);
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
