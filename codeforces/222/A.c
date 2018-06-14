#include <stdio.h>


int main()
{
    int n, k, a, last=0, l=1;
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a);
        if (a == last)
        {
            l ++;
        }
        else
        {
            l = 1;
        }
        last = a;
    }

    printf("%d\n", l + k > n ? n - l: -1);
    return 0;
}