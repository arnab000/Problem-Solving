#include<stdio.h>

int main()
{
    int a,b,c,d,x,y;
    char ch;
    scanf("%d%c%d",&a,&ch,&c);
    scanf("%d%c%d",&b,&ch,&d);
    x=a-b;
    if(x<0)
        x+=24;
    y=c-d;
    if(y<0)
    {
        y+=60;
        if(x==0)
            x=24-1;
        else
            x--;
    }
    if(x<10&&y>9)
        printf("0%d:%d",x,y);
    else if(x>=10&&y<10)
        printf("%d:0%d",x,y);
        else if(x<10&&y<10)
        printf("0%d:0%d",x,y);
        else
            printf("%d:%d",x,y);
}
