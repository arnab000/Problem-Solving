#include<stdio.h>
int main()
{
    int m,n,x;
    double d;
    scanf("%d %d",&m,&n);
    d=(m*n*1.0)/2;
    x=floor(d);
    printf("%d",x);
}