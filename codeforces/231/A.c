#include<stdio.h>
int main()
{
    int i,l,m=0,j,n,a[1000][100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
     for(i=0;i<n;i++)
    {
l=0;
        for(j=0;j<3;j++)
        {
            if(a[i][j]==1)
            {
                l++;}


        }

        if(l>=2)
        {
            m++;


        }
    }
    printf("%d",m);

}
