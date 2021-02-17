//Write a program to add two user input numbers using 4 functions.

#include <stdio.h>

int array_input(int* A, int n)
{
    printf("Enter elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    return 0;
}

int calc_sum(int n, int* A)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + A[i];
    }
    printf("%d", sum);
    return sum;
}
int result(int n, int* A, int sum)
{   
    printf(" The sum of");
    for (int a = 0; a < n; a++)
    {
        printf(" %d ", A[a]);
        printf(",");
    }
    printf(" is: %d", sum);

    return 0;
}

int main()
{
    int a, n, sum;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int A[n];
    array_input(A, n);
    sum = calc_sum(n, A);
    result(n,A,sum);

    return 0;
}
