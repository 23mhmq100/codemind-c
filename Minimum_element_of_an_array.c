#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=a[0];
    for(i=1;i<n;i++)
    {
        if(min>=a[i])
        {
           sum=a[i];
        }
    }
    printf("%d",sum);
}