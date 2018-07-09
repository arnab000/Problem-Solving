#include<stdio.h>
int main()
{
    int a[11][11],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a[0][i]=1;

    }
    for(j=0;j<n;j++)
    {
        a[j][0]=1;
    }

    for(j=1;j<n;j++)
    {
        for(i=1;i<n;i++)
        {
            a[j][i]=a[j-1][i]+a[j][i-1];

        }
    }


    printf("%d",a[n-1][n-1]);
}
