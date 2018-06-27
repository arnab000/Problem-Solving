#include<stdio.h>
#include<string.h>
int main()
{
    int x,y,i,j,k,l=0;
    char a[101];
    char b[]="abcdefghijklmnopqrstuvwxyz";
    gets (a);
    y=strlen(a);
    for(i=0;i<26;i++)
    {
        k=0;
        for(j=0;j<y;j++)
        {
          if(b[i]==a[j])
           {
              k++;



}
if(k==1)
break;


        }
        l=l+k;


    }



    if(l%2==0)
        printf( "CHAT WITH HER!");
    else printf("IGNORE HIM!");
}
