#include<stdio.h>
int main()
{
    int a[101],i,j,sum=0,n,d,x,y;
    scanf("%d %d",&n,&d);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }

    y=sum+((n-1)*10);

    if(y<=d)
    {
       x=(d-sum)/5;
       printf("%d",x);

    }
    else printf("-1");


}


