#include<stdio.h>
int main()
{
    int i,j,n,a[100000][5],min,max,location,c=0,l,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    min=a[0][0];
    max=a[0][1];
    for(i=0;i<n;i++)
    {
if (a[i][0]<=min && a[i][1]>=max)
          {
           min=a[i][0];
           max=a[i][1];
            location=i+1;


          }

    }
     l=a[0][0];

    for(i=0;i<n;i++)
    {
if (a[i][0]<=l )
          {
           l=a[i][0];



          }

    }

    k=a[0][1];
    for(i=0;i<n;i++)
    {
if ( a[i][1]>=k)
          {

           k=a[i][1];
            }

    }
    if(l==min && k== max)
    {
      printf("%d",location) ;
    }
    else printf("-1");





}