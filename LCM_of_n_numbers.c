#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        int x,y,j;
        x=arr[i];
        y=arr[i+1];
        for(j=1;j<=y;j++)
        {
            int z=x*j;
            if(z%y==0)
            {
                arr[i+1]=z;
                break;
            }
        }
    }
    printf("%d",arr[n-1]);
}