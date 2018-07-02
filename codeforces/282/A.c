#include <stdio.h>
#include <string.h>

int main(void)
{
   char *result="X++", *string = "++X",*rekt,*ralph;
   char chars[101];
   int a=0,i,n;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {

scanf("%s",chars);
       rekt = strstr(chars, string);
   ralph= strstr(chars,result);
   if(rekt!='\0'||ralph!='\0')
    a++;

   else a--;


   }
   printf("%d",a);


}