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
 

int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        vector<ll>sura;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            sura.push_back(x);
        }
        sort(sura.rbegin(),sura.rend());
        ll cost1,cost2,mul1,mul2;
        cin>>cost1>>mul1;
        cin>>cost2>>mul2;
      
        ll k;
        cin>>k;
        ll arr[n+1];
         arr[0]=0;
        for(ll i=1;i<=n;i++)
        {
            arr[i]=sura[i-1]+arr[i-1];
        }
        ll mul3=mul1*mul2/__gcd(mul1,mul2);
        ll index;
        ll sum=0;
        for(index=1;index<=n;index++)
        {
            sum=0;
            ll sum1=0,sum2=0;
            ll b1=index/mul3;
            ll b2=index/mul2;
            ll b3=index/mul1;
           b2-=b1;
           b3-=b1;
            sum+=(arr[b1]*(cost2+cost1))/100;
            if(cost1>cost2){
            sum+=((arr[b1+b3]-arr[b1])*cost1)/100;
             ll sec=b1+b3;
             sum+=((arr[sec+b2]-arr[sec])*cost2)/100;
            }
            else{
            sum+=((arr[b1+b2]-arr[b1])*cost2)/100;
             ll sec=b1+b2;
             sum+=((arr[sec+b3]-arr[sec])*cost1)/100;
            }
            if(sum>=k)
            break;
            

        }
        if(sum>=k){

        cout<<index<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        


        
    }
    


  }



   
      
    
        

