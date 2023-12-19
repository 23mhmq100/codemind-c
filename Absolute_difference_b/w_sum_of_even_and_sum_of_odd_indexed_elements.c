#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=0,b=0;
    scanf("%d",&n);
    int m[n];
    for(int i=0;i<n;i++){
        scanf("%d",&m[i]);}
    for(int i=0;i<n;i++){
        if(i%2==0){
        a=a+m[i];}
        if(i%2!=0){
            b=b+m[i];}
    }
    printf("%d",abs(b-a));
}