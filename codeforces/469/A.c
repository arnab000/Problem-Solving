#include<stdio.h>
int main()
{
    int i,j,k,n,l=0,m=0,p=0,y=0,x;
    int a[101],b[101],c[101],d;
    scanf("%d",&n);
    scanf("%d",&d);
    for(i=0;i<d;i++)
       {
           scanf("%d",&a[i]);

       }
       scanf("%d",&x);
    for(i=0;i<x;i++)
          {
           scanf("%d",&b[i]);

          }
    for(j=1;j<=n;j++)
    {
        l=0;
        for(i=0;i<d;i++)
        {
            if(a[i]==j)
         {
            l++;

         }
        }
        if(l==0)
            {
                c[p]=j;
                p++;
            }

    }

    for(k=0;k<p;k++)
    {
        y=0;
        for(i=0;i<x;i++)
        {
            if(c[k]==b[i])
                y++;


        }
        if(y==0)
        {
            m++;
        }

    }


     if(p==0 || m==0)
    {
        printf("I become the guy.");
    }
    else
        printf("Oh, my keyboard!");



}