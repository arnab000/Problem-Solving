#include <bits/stdc++.h>
#define ll long long
#define fr(i,p,n) for(int i=p;i<n;i++)
#define fr1(i,p,n) for(int i=p;i>=n;i--)
#define pb push_back
#include <stdio.h>
#define PI 3.14159265358979323846
#define MOD 1000000007
#define precise cout << std::setprecision(10) << std::fixed;
using namespace std;
 
bool f=false;
map<ll,ll> mp;
void tt(ll a,ll k)
{
    ll c=0,d=0;
    if(a==1) mp[0]++;
    else if(a%k==0)
    {
        while(1)
        {
            while(a%k==0)
            {
                a=a/k;
                c++;
            }
            if(a==1) {mp[c]++;break;}
            else if((a-1)%k==0) {mp[c]++;a--;}
            else {f=true;break;}
        }
    }
    else if((a-1)%k==0)
    {
        a--;
        mp[0]++;
        while(1)
        {
            while(a%k==0)
            {
                a=a/k;
                c++;
            }
            if(a==1) {mp[c]++;break;}
            else if((a-1)%k==0) {a--;}
            else {f=true;break;}
        }
    }
    else f=true;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios::sync_with_stdio(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        fr(i,0,n) cin>>a[i];
        f=false;
        mp.clear();
        fr(i,0,n)
        {
            if(a[i]==0) continue;
            tt(a[i],k);
            if(f==true) break;
        }
        if(f) cout<<"NO"<<endl;
        else
        {
            for (ll i = 0; i <= 60; i++)
            {
                //cout<<mp[i]<<" ";
                if(mp[i]>1) {f=true;break;}
            }
            //cout<<endl;
            if(f) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}