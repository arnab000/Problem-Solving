#include<stdio.h>
#include<math.h>
int main()
{
    long long n,m,l=0,k=1,u=1;
    long long i, j;
    scanf("%lld%lld",&n,&m);
    if(n<m){
    for(i=n;i>=1;i--)
       {
        k=k*i;
       }
       printf("%lld",k);
        }
        else {
    for(j=m;j>=1;j--)
       {
        u=u*j;
       } printf("%lld",u);}







}
