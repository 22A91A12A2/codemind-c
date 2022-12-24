#include<stdio.h>
int main()
{
    int hr,min,sec,rm,rs;
    scanf("%d",&sec);
    hr=sec/3600;
    min=sec/60;
    rm=min%60;
    rs=sec%60;
    printf("H:M:S-%d:%d:%d",hr,rm,rs);
}