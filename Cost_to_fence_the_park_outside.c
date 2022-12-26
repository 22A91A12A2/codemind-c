#include<stdio.h>
#include<math.h>
int main()
{
    int l,b,w,cst,tc;
    scanf("%d %d %d %d",&l,&b,&w,&cst);
    tc=cst*((l+2*w)*(b+2*w)-(l*b));
     printf("%d",tc);
 }