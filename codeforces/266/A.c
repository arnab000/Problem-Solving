#include<stdio.h>
#include<string.h>
int main()
{
  int i,j=0,x,n;
  char str[52];
  scanf("%d\n",&n);

  gets(str);
 for(i=0;i<n;i++)
 {
     if(str[i]==str[i+1])
     {
         j++;
     }
 }
 printf("%d",j);




}
