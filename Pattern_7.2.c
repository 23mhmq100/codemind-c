#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
            for(int j=n;j>=1;j--)
            {
                if(i>=j)
                {
                    printf("%d ",i);
                }
                else
                {
                    printf(" ");
                }
            }
            printf("
");
    }
}