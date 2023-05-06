#include<stdio.h>
int main()
{
    int n,temp=0,rem;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        if(temp<rem)
        temp=rem;
        n=n/10;
    }
    printf("%d",temp);
}