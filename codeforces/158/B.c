#include<stdio.h>

int main()
{
    long long i,l=0,c=0,k=0,n,p=1,d;
    long long x=0;
    double g;
    scanf("%lld",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==4)
            l++;
        if(a[i]==3)
            c++;
        if(a[i]==2)
            k++;
         if(a[i]==1)
            x++;


    }

    while(p<=c)
    {
        if(x==0 || c==0)
            break;
        x--;
        p++;
    }
    
    p=1;
    if(k%2==0)
    {
        k=k/2;

    }
 else
 {
     k=(k-1)/2;
     k=k+1;

       while(p<=2)
       {
           if(x==0)
            break;
           x--;
           p++;
       }

 }

 g=(x*1.0)/4;

 x=ceil(g);

 printf("%lld ",l+c+k+x);
}

