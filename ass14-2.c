#include <stdio.h>
int main()
{
    int a[10], i,sum=0,avg=0;
    printf("enter 10 numbers ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        sum = sum + a[i];
    }
    avg=sum/10;
    printf("\n sum of numbers entered is: %d", avg);
    return 0;
}