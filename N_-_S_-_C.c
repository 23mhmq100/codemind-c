#include<stdio.h>
int main()
{
    int i,a,b;
    scanf("%d%d",&a,&b);
    for(i=1;i<b-a;i++)
    {
        printf("%d %d %d
",a+i,(a+i)*(a+i),(a+i)*(a+i)*(a+i));
    }
}