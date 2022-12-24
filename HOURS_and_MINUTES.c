#include<stdio.h>
int main()
{
    int minutes;
    scanf("%d",&minutes);
    int hr=minutes/60;
    int remmin=minutes%60;
   printf("%d Hour(s) %d Minute(s)",hr,remmin);

    
}