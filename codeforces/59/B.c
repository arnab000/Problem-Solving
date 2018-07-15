#include<stdio.h>
int main()
{
    int n,a[101],i,l=0,sum=0,min=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum= sum +a[i];
        if(a[i]%2!=0 && l==0)
        {
            min=a[i];
            l++;
        }

    }

    for(i=0;i<n;i++)
    {
        if(min>a[i]&& a[i]%2!=0)
        {
            min=a[i];
        }
    }



        if(sum%2==0)
        {
           if(min==0)
                printf("%d",min);
           else printf("%d",sum-min);
        }


    if(sum%2!=0) printf("%d",sum);

}
