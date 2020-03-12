#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <bitset>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <set>
#include <map>
using namespace std;
typedef long long ll;
 
const int maxn = 1e4 + 5;
const int inf = 0x3f3f3f3f;
 
int read() {
    int x = 0, f = 0; char ch = getchar();
    while(ch < '0' || ch > '9') {if(ch == '-')f = -f; ch = getchar();}
    while(ch >= '0' && ch <= '9') {x = (x<<3)+(x<<1)+ch-'0'; ch = getchar();}
    return x;
}
 
int vis[maxn];
 
int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int n, x; bool flag = false;
        scanf("%d", &n);
        memset(vis, 0, sizeof(vis));
        for(int i = 1; i <= n; ++i) {
            scanf("%d", &x);
            if(!vis[x])         vis[x] = i;
            if(i > 1 + vis[x])  flag = true;
        }
        if(flag)    puts("YES");
        else        puts("NO");
    }
    return 0;
}
 