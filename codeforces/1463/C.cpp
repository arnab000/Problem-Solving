#include<bits/stdc++.h>
using namespace std;
const long long INF=10000000000000000;
vector<pair<long long,long long>> v;
long long t,n,p,x,y,c,l,r;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> t;
    while(t--){
        cin >> n;
        v.resize(n);
        for(auto &it: v) cin >> it.first >> it.second;
        v.push_back({INF,INF});
        p=x=y=c=0;
        for(long long i=0; i<n; i++){
            if(v[i].first >= p + abs(x-y)){
                x=y;
                y=v[i].second;
                p=v[i].first;
            }
            if(y>=x){
                l = x + v[i].first - p;
                r = l + v[i+1].first - v[i].first;
                if(r>y) r=y;
            }
            else{
                l = x - v[i].first + p;
                r = l - v[i+1].first + v[i].first;
                if(r<y) r=y;
            }
            if(v[i].second>=min(l,r) && v[i].second<=max(l,r)) c++;
        }
        cout << c << "\n";
    }
    return 0;
}