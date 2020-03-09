#include <bits/stdc++.h>
#define ll long long  
#define inf (ll)1000000000000000
#define inf1 (ll)1000000000000000
#define MOD 1000000007
#define maxn 400010
#define pb push_back
#define pll pair<ll,ll>
#define vi vector<ll>
#define vvi vector<vector<ll> >
#define vii vector<pll> 
#define vvpll vector<vector<pll> >
#define vpll vector<pll> 
 
using namespace std;
 
int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		ll a[n],powk[64];
		powk[0]=1;
		for(int i=1;i<64;i++)
		{
			powk[i]=powk[i-1]*k;
		}
		map<ll,ll> mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
			ll temp=a[i],cnt=0;
			while(temp>0)
			{
				mp[powk[cnt]]+=temp%k;
				temp/=k;
				cnt++;
			}
		}
		int flag=0;
		for(int i=0;i<64;i++)
		{
			if(mp[powk[i]]>=2)
			{
				cout<<"NO\n";
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<"YES\n";
		}
	}
}