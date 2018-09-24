#include<stdio.h>
int factorial(int in)
{
    if(in==1)
        return 1;
    else
        return in*factorial(in-1);
}
int main()
{
    int num,fact;
    printf("Enter the Number: ");
    scanf("%d",&num);
    fact=factorial(num);
    printf("Factorial:%d",fact);
    return 0;
}
