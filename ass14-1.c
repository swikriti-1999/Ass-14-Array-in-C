#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("enter 10 numbers ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    printf("\n sum of numbers entered is: %d",sum);
return 0;
}