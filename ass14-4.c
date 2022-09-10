#include<stdio.h>
int main()
{
    int a[10],i,res=0;
    printf("enter 10 numbers ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(res<a[i])
            res=a[i];
    }
    printf("\n greatest number is %d",res);
    return 0;
}