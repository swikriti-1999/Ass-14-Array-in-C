#include<stdio.h>
int main()
{
    int a[100],n,i,b[100];
    printf("\n enter value fo rn ");
    scanf("%d",&n);
    printf("\n enter %d value",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
        printf(" %d",b[i]);
    }
    return 0;
}