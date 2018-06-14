#include <stdio.h>
#include <string.h>

int main(void)
{
   char *result="1111111", *string = "0000000",*rekt,*ralph;
   char chars[101];
   gets(chars);

   rekt = strstr(chars, string);
   ralph= strstr(chars,result);
   if(rekt=='\0'&& ralph=='\0')
    printf("NO");
   else printf("YES");


}