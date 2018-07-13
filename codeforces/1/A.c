#include<stdio.h>
#include<math.h>
int main()
{
    long long n,m,l,k,u;
    long double i, j;
    scanf("%lld %lld %lld",&n,&m,&l);
     i=n*1.0/l;
 k=ceil(i);
   j=m*1.0/l;
 u=ceil(j);
        printf("%lld ",k*u);


}
