#include<stdio.h>
int main()
{
    int m,n,i,j,a[100000],x,temp,l;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    

        x=a[m-n]-a[m-1];
    for (i=0;i<m-n;i++)
    {
        for(j=i+(n-1);j<m;j++)
         {
            if(x>(a[i]-a[j]))
            x=a[i]-a[j];
                

         }
        


    }
printf("%d",x);
}