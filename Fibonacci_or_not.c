#include<stdio.h>
int main()
{
    int n,a=0,b=1;
    int c=a+b;
    scanf("%d",&n);
    while(c<n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}