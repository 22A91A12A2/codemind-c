#include<stdio.h>
int main()
{
    int i,n,b;
    scanf("%d%d",&n,&b);
    for(i=1;i<=b;i+=2)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}
