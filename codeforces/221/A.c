#include<stdio.h>
#include<conio.h>



int main()
{
    int n,a[1001],i,temp,j;
    scanf("%d",&n);
    printf("%d",n);
    for(i=1;i<=n;i++)
    {
        a[i]=n-i;
    }

        for(i=1;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {


        if(a[i]>a[j])
        {
           temp=a[i];
            a[i]=a[j];
            a[j]=temp;
    }
    }
    }
 for(i=1;i<n;i++)
    {
        printf(" %d",a[i]);
    }

}