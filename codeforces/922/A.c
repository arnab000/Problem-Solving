#include<stdio.h>
int main()
{

int n,m;
scanf("%d %d",&n,&m);

if(m==0 )  printf("No");
if(m==1 && n==0) printf("Yes");
if(m==1 && n!=0) printf("No");
if(m>1){
if(m%2==0 )
{
   if(n%2!=0 && n>=(m-1) )
        printf("Yes");
   else printf("No");
}
else
{
    if(n%2==0 && n>=(m-1))
        printf("Yes");
    else printf("No");
}
}
}