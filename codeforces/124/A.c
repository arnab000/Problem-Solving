#include<stdio.h>
#include<stdlib.h>
 int main()
 {
     int n,a,b,i,x,y,c=0,u;
     scanf("%d %d %d",&n,&a,&b);
     for(i=1;i<=n;i++)
     {
         x=n-i;

         y=(1-i);
         u= abs(y);


         if(u>=a && x<=b)
         {
             c++;
         }
     }
      printf("%d",c);

 }