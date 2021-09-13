#include<stdio.h>
long fact(int n);
int main() 
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial = %d", fact(n));
    return 0;
}

long fact(int n) 
{
    if (n>=1)
        return n*fact(n-1);
    else
        return 1;
}