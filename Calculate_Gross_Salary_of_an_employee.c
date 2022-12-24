#include<stdio.h>
int main()
{
  float basic,hra,da,pf,gross;
  scanf("%f%f%f",&basic,&hra,&da);
  pf=(basic*12)/100;
  gross=basic+da+hra+pf;
  printf("%.2f
%.2f",pf,gross);
  return 10;
    
}