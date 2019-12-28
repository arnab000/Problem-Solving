#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define IO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
const int N = 2e5 + 5, M = 2 * N + 5;
 
int n, in[N], out[N];
 
int main(){
    scanf("%d", &n);
    vector<int> ans;
    for(int u = 0 ; u < n ; ++u){
        int v;
        scanf("%d", &v);
        --v;
        if(~v)++in[v], ++out[u];
        ans.emplace_back(v);
    }
    vector<int> v;
    for(int i = 0 ; i < n ; ++i)
        if(in[i] == 0 && out[i] == 0)
            v.emplace_back(i);
//    cout << "----------" << endl;
//    for(auto i : v)cout << i << " " ; cout << endl;
//    cout << "----------" << endl;
    int fen = -1;
    for(int i = 0 ; i < n ; ++i){
        if(out[i] == 0 && in[i]){
            fen = i;
            break;
        }
    }
//    cout << "Fen = " << fen << endl;
//    for(int i = 0 ; i < n ; ++i)cout << in[i] << " " ; cout << endl;
//    for(int i = 0 ; i < n ; ++i)cout << out[i] << " " ; cout << endl;
//    cout << endl;
    if(~fen){
        for(auto i : v){
            ans[fen] = i;
            ++out[fen];
            ++in[i];
            fen = i;
        }
        fen = v.back();
    }
//    for(int i = 0 ; i < n ; ++i)cout << in[i] << " " ; cout << endl;
//    for(int i = 0 ; i < n ; ++i)cout << out[i] << " " ; cout << endl;
    vector<int> x, y;
    for(int i = 0 ; i < n ; ++i)if(!in[i])x.emplace_back(i);
    for(int i = 0 ; i < n ; ++i)if(!out[i])y.emplace_back(i);
    if(x.size())rotate(x.begin(), x.begin() + 1, x.end());
    if(x.size() != y.size())
        assert(1 == 5);
    int sz = x.size();
    for(int i = 0 ; i < sz ; ++i)
        ans[y[i]] = x[i];
    for(auto &i : ans)printf("%d%c", ++i, " \n"[&i == &ans.back()]);
}