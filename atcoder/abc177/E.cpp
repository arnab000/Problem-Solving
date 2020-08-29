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
void prefix_function( string s,ll arr[] )
{
     long long border=0; arr[0]=0;
    for(long long i=1;i<s.size();i++)
    {
      while(border>0 && s[i]!=s[border])
        border=arr[border-1];
     
     if(s[i]==s[border])
         border++;
      else
       border=0;
      
      arr[i]=border;
    }
}
ll mod=998244353;
ll add( ll a , ll b)
{
    return (((a%mod)+(b%mod))%mod);
}
ll mul(ll a,ll b)
{
  return (((a%mod)*(b%mod))%mod);
}
//send mod-2 for a^-1 if mod is a prime number
ll binpow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = mul(res, a);
        a = mul(a, a);
        b >>= 1;
    }
    return res;
}
ll spf[1000005]; 
void sieve() 
{ 
	spf[1] = 1; 
	for (int i=2; i<1000005; i++) 

	
		spf[i] = i; 

	for (int i=4; i<1000005; i+=2) 
		spf[i] = 2; 

	for (int i=3; i*i<1000005; i++) 
	{ 
		
		if (spf[i] == i) 
		{ 
		 
			for (int j=i*i; j<1000005; j+=i) 

			
				if (spf[j]==j) 
					spf[j] = i; 
		} 
	} 
} 


int main()
{
    Fast
ll n;
sieve();
cin>>n;
ll gcd=0;
bool pairwise=true,setwise=false;
vector<ll>sura;
for(ll i=0;i<n;i++)
{
    ll k;
    cin>>k;
    gcd=__gcd(gcd,k);
    sura.push_back(k);
}

map<ll,bool>fi;
for(ll i=0;i<n;i++)
{
    ll x=sura[i];
    map<ll,bool>se;
    while (x != 1) 
	{ 
        if(fi[spf[x]] && !se[spf[x]])
        pairwise=false;
		se[spf[x]]=true;
        fi[spf[x]]=true;
		x = x / spf[x]; 
	} 

}
if(pairwise)
{
    cout<<"pairwise coprime"<<endl;
    return 0;
}
if(gcd==1)
{
    cout<<"setwise coprime"<<endl;
    return 0;
}
cout<<"not coprime"<<endl;




}



   
      
    
        

