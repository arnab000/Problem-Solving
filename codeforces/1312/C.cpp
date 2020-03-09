#include <bits/stdc++.h>
 
using namespace std;
 
#define Speed ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define fr first
#define sc second
#define pb push_back
#define PI acos(-1.0)
#define print(num,ans) cout<<setprecision(num)<<fixed<<ans
 
ll n,k;
ll a[1000];
 
vector<ll> con(ll x)
{
    vector<ll> v;
    while(x > 0)
    {
        v.pb(x%k);
        x /= k;
    }
    return v;
}
 
vector<ll> g;
bool vis[1000];
 
int main()
{
    Speed;
    int t;
    cin>>t;
    while(t--)
    {
        g.clear();
        memset(vis,0,sizeof vis);
        cin>>n>>k;
        bool b = 0;
        for(int i=0;i<n;i++)cin>>a[i];
 
        for(int i=0;i<n;i++)
        {
            if(!a[i])continue;
            g = con(a[i]);
            if(g.empty())continue;
            for(int j=0;j<g.size();j++)
            {
                if(g[j] > 1 || (g[j] == 1 && vis[j]))
                {
                    b = 1;
                    break;
                }
                else if(g[j] == 1)
                {
                    vis[j] = true;
                }
            }
            if(b)break;
            g.clear();
        }
        if(b)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
 
    }
    return 0;
}