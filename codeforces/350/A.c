#include<stdio.h>
int main()
{
    int max ,min, min2,i,m,n,l;
    scanf("%d %d",&m,&n);
    int a[m],b[n];
    for (i=0;i<m;i++)
        scanf("%d",&a[i]);
    for (i=0;i<n;i++)
        scanf("%d",&b[i]);

    min=a[0];
    max=a[0];
    for(i=0;i<m;i++)
    {
        if(max<a[i])
            max=a[i];
        if (min>a[i])
            min=a[i];
    }
    l=2*min;
    min2=b[0];
    for(i=0;i<n;i++)
    {
        if(min2>b[i])
            min2=b[i];
    }



    if(l<=max && max<min2 )
        printf("%d ",max);
       else if(l>=max && l< min2)
            printf("%d ",l);
    else printf("-1");


}