#include <stdio.h>
int main()
{
    int n,i, j, k;
    scanf("%d",&n);
    int arr[n],ctr=0;
    for(i=0;i<n;i++)
    {
	    scanf("%d",&arr[i]);
	}
    for(i=0; i<n; i++)
    {
        ctr=0;
        for(j=0,k=n; j<k; j++)
        {
            if (i!=j)
            {
		       if(arr[i]==arr[j])
                {
                    ctr++;
                }
            }
        }
        if(ctr==0)
        {
            printf("%d ",arr[i]);
        }
    }
}