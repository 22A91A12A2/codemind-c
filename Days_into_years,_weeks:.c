#include<stdio.h>
int main()
{
    int days,yrs,weeks;
    scanf("%d",&days);
    yrs=days/365;
    weeks=(days%365)%7;
    days=(days%365)/7;
    printf("%d
%d",yrs,days);

    
}