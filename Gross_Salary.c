#include<stdio.h>
int main()
{
    int a,b,c;
    float d;
    scanf("%d",&a);
    if(a<=10000){
        b=a*.80;
        c=a*.20;
        d=a+b+c;
    }
    else if(a<=20000){
        b=a*.90;
        c=a*.25;
        d=a+b+c;
    }
    else{
        b=a*.95;
        c=a*.30;
        d=a+b+c;
    }
        printf("%.2f",d);
    
}