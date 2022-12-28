#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && c>b)
    {
        d=a+c;
        printf("%d",d);
        
    }
    else if(b>a && c>a)
    {
        d=b+c;
        printf("%d",d);
    }
    else 
    {
        d=a+b;
        printf("%d",d);
}}