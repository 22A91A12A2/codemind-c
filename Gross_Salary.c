#include<stdio.h>
int main()
{
    int b;
    scanf("%d",&b);
    float da,hr,tb;
    if(b<10000)
    {
        da=b*0.80;
        hr=b*0.20;
    }
    else if(b>10000 && b<=20000)
    {
        da=b*0.90;
        hr=b*0.25;
    }
    else if(b>20000)
    {
        da=b*0.95;
        hr=b*0.30;
    }
    tb=b+da+hr;
    printf("%.2f",tb);
}