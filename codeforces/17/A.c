#include<stdio.h>
#include<math.h>

int main()
{
int n,i,fact,j,G[1000],p=0,k=0,m,h,l=0,d;

scanf("%d %d",&n,&d);

for(i=2; i<=n; i++)
{
fact=0;
for(j=1; j <= sqrt(i); j++)
{
if(i%j==0)
fact++;
if(fact>1)
    break;
}
if(fact==1)
{
k++;
G[p]=i;
++p;


}

}

for(p=0;p<k-1;p++)
{

m=G[p]+G[p+1]+1;
if(m<=n)
{
    h=0;
    for(i=1;i<=sqrt(m);i++)
 {
     if(m%i==0)
        h++;
        if(h>1)
            break;

 }
 if(h==1)
    {

        l++;


    }


}




}
if(d<=l)
    printf("YES");
    else printf("NO");

}