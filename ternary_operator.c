#include<stdio.h>

int main()
{
    float temp;
    char *status;
    scanf("%.1f",&temp);
    if(temp<=98.6)
    {
        status="Normal";
        printf("%s",status);
    }
    else
    {
        status="Sick";
        printf("%s",status);
    }
    return 0;
}
