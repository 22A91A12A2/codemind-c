
#include<stdio.h>
int main()
{
    int n,rev=0,rem,temp;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==temp)
    {
        printf("True");   
    }
    else
    {
        printf("False");
    }    
}