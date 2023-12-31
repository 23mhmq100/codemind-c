#include<stdio.h>
int main()
{
    int n,d=0,digit;
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;
        if(digit>d)
        {
            d=digit;
        }
        n/=10;
    }
    printf("%d",d);
}