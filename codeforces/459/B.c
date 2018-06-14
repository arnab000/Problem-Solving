#include<stdio.h>
int main()
{
    long long m,i,j,x,max,min,l=0,k=0;
    scanf("%llu",&m);
    long long a[m];
    for(i=0;i<m;i++)
    {
        scanf("%llu",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<m;i++)
    {
      if(max<a[i])
        max=a[i];
      if(min>a[i])
        min=a[i];
    }


        x=max-min;
    for (i=0;i<m;i++)
    {

            if(max==a[i])
                l++;
             if(min==a[i])
                    k++;




}

if(x==0) printf("%llu %llu",x,m*(m-1)/2);
else
printf("%llu %llu",x,l*k);

}