#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("\n enter value fo n ");
    scanf("%d",&n);
    printf("\n enter %d value",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf(" %d",a[i]);
    }
    return 0;
}