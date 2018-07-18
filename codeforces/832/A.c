#include<stdio.h>
int main()
{
    long long x,y,z;
    scanf("%lld %lld",&x,&y);
    z=x/y;
    if(z%2==0)
        printf("NO");
    else printf("YES");
}
