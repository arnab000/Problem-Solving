#include <stdio.h>
#include <string.h>
int main ()
{
    int n, i, length;
    char ch[1000];
    scanf ("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%s", ch);
        length = strlen(ch);
        if (length <= 10){
            printf ("%s\n", ch);
        }
        else{
            printf ("%c%d%c\n", ch[0], length-2, ch[length-1]);
        }
    }
    return 0;
}