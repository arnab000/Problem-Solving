#include<bits/stdc++.h>
    
using namespace std;
#define ll long long
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fo(a,b,c) for(int i=a;i<b;i+=c)  
typedef pair<ll , pair<ll, ll> > pi;
int pow(int x,int y){
    int res=1;
    while(y){
        if(y&1) res*=x;
        y>>=1;
        x*=x;
    }
    return res;
}   
struct Compare {
    constexpr bool operator()(pi const & a,
                              pi const & b) const noexcept
    { return a.first < b.first || (a.first == b.first && a.second.first > b.second.first); }
 
};
 



int main() {
    ll test;
    cin >> test;
    while(test--) {
        string s;
        cin >> s;
        ll n;
        cin >> n;
        vector<ll> b;
        for(ll i=0;i<n;i++)
            {
                ll k;
                cin>>k;
                b.push_back(k);
            }
        vector<vector<ll>> failures;
        while (1) {
            vector<ll>sura;
           for(ll i=0;i<n;i++){
                if (b[i] == 0){
                    sura.push_back(i);
                }
           }
            if (sura.empty())
                break;
            failures.push_back(sura);
            for(ll i=0;i<n;i++){
                if (b[i] == 0)
                    b[i] =1000000000;
                else
                    for(ll j=0;j<sura.size();j++)
                        b[i] -= abs(i -sura[j]);
            }
        }
        map<char,ll>ma;
        for(ll i=0;i<s.size();i++){
            ma[s[i]]++;
        }
        auto j = ma.rbegin();
       char ans[n+1];
        for (auto pasa: failures) {
            while (j->second < pasa.size())
                j++;
            for (ll i=0;i<pasa.size();i++)
                ans[pasa[i]] = j->first;
            j++;
        }
       for(ll i=0;i<n;i++)
       {
           cout<<ans[i];
       }
       cout<<endl;
    }
}

   
      
    
        

