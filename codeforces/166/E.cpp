#include <bits/stdc++.h>
using namespace std;

unsigned long long fib[10000000];
int main() {
    unsigned long long num,  i,m=1000000007;
    fib[1] = 0;
    fib[2] = 3;
    while(scanf("%lld", &num) == 1) {
        for(i = 2; i <= num; i++) {
            if(i%2==0)
            fib[i] =(3*fib[i-1])%m+3;

            else
              fib[i]=(3*fib[i-1])%m-3;


        }
        cout<<fib[num]%m<<endl;;
    }
    return 0;
}
