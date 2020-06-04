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
 
ll INF=1000000000;
int main()
{
    ll n;
    cin>>n;
	vector<ll> a(n);
	for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
	long long ans = 0;
	for(long long mx=0;mx<31;mx++){
		long long cur = 0;
		long long best = 0;
		for(long long i=0;i<n;i++){
			long long val ;
            if(a[i]>mx)
            val=-INF;
            else
            {
               val=a[i] ;
            }
            
			cur += val;
			best = max(val, cur);
			ans = max(ans, best - mx);
            cur=best;
		}
      
	}
	cout<<ans<<endl;


  }



   
      
    
        

