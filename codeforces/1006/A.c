#include<stdio.h>

int main()
{
    long long n,i;
    scanf("%lld",&n);
    long long a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]%2==0)
        {
            printf("%lld ",a[i]-1);

        }
        else printf("%lld ",a[i]);
    }

}
