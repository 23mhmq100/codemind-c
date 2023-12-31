#include<stdio.h>
int main()
{
    int n,fib,fib1=0,fib2=1,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(i<=1)
        a=i;
        else
        {
            a=fib1+fib2;
            fib1=fib2;
            fib2=a;
        }
        printf("%d ",a);
    }
    
}