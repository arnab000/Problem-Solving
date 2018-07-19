#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,x;
    char a[202];
    gets(a);
    x=strlen(a);
    for(i=0;i<x;i++)
    {
        if(a[i]=='-'&& a[i+1]=='.')
        {
            printf("1");
            i++;
        }
        else if(a[i]=='-'&& a[i+1]=='-')
        {
            printf("2");
            i++;
        }
        else printf("0");
    }
}
