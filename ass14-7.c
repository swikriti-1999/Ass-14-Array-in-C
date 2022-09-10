#include<stdio.h>
int main()
{
    int a[10],i,j,temp=0;
    printf("\n enter 10  numbers randomly");
    for ( i = 0; i <10; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n numbers after sorting: ");
    for(i=0;i<10;i++)
    {
        printf(" %d",a[i]);
    }
    printf("\n second largest number is ");
    for(i=9;i>=0;i--)
    {
        if(i==8)
        printf("%d",a[i]);
    }
    return 0;
}