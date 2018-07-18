
#include<stdio.h>
#include<string.h>

int main()

 {
    char ch[100], temp;
    gets(ch);
    int x, i, j;
    x = strlen (ch);
    for (i = 0; i < x; i++){
        for (j = i+1; j < x ; j++){
            if (ch[i] > ch[j] && ch[j] != '+'){
                temp = ch[j];
                ch[j] = ch[i];
                ch[i] = temp;
            }
        }
    }
    printf("%s\n",ch);
    return 0;
}

