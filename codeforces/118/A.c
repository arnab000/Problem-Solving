#include <stdio.h>
#include <string.h>
int main ()
{
    char ch[1000], ch1[1000];
    int i, x, j;
    gets(ch);
    strlwr(ch);
    x = strlen(ch);
    for (i = 0; i < x; i++){
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'y')
               continue;

        printf (".%c", ch[i]);
    }
return 0;

}