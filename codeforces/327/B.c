#include<stdio.h>
#include<math.h>

int main()
{
long int n,i,fact,j,k=0;
scanf("%ld",&n);

for(i=2; i<10000000; i++)
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
printf("%ld ",i);
}
if(k==n)
break;
}

}