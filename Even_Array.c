#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],s=0,f=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            f++;
        }
    }
    if(f==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}