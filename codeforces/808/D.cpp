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
  ll n;
  cin>>n;
  vector<ll>sura;
  ll shoja[n+2],ulta[n+2];
  ll sum=0;
  for(ll i=0;i<n;i++)
  {
    ll k;
    cin>>k;
    sura.push_back(k);
    sum+=k;
  }
  if(sum%2)
  {
      cout<<"NO"<<endl;
      return 0;
  }
  ll half=sum/2;
 shoja[0]=sura[0];
  for(ll i=1;i<n;i++)
  {
      shoja[i]=(sura[i]+shoja[i-1]);
  }
  ulta[n-1]=sura[n-1];
   for(ll i=n-2;i>=0;i--)
  {
     ulta[i]=(ulta[i+1]+sura[i]);
  }
  vector<pair<ll,ll> >ans;
    for(ll i=0;i<n;i++)
    {
        ans.push_back({sura[i],i});

    }
    sort(sura.begin(),sura.end());
    sort(ans.begin(),ans.end());
    auto ku=lower_bound(sura.begin(),sura.end(),half);
    if(ku!=sura.end() && *ku==half)
    {
        cout<<"YES"<<endl;
        return 0;

    }
    bool hbe =false;
    for(ll i=0;i<n;i++)
    {
        if(shoja[i]==half)
        {
          hbe =true;
          break;
        }
        if(shoja[i]>half)
        {
            break;
        }
      ll ele=half-shoja[i];
      auto it=upper_bound(sura.begin(),sura.end(),ele);
      if(it==sura.begin())
      {
          continue;
      }
      it--;
      ll index =it-sura.begin();
      if(ans[index].first==ele && ans[index].second>i)
      {
          hbe=true;
          break;
      }

    }
    if(hbe)
    {
        cout<<"YES"<<endl;
        return 0;
    }
     for(ll i=n-1;i>=0;i--)
    {
        if(ulta[i]==half)
        {
          hbe =true;
          break;
        }
        if(ulta[i]>half)
        {
            break;
        }
      ll ele=half-ulta[i];
      auto it=lower_bound(sura.begin(),sura.end(),ele);
      if(it==sura.end())
      {
          continue;
      }
      ll index =it-sura.begin();
      if(ans[index].first==ele && ans[index].second<i)
      {
          hbe=true;
          break;
      }

    }
    if(hbe)
    cout<<"YES"<<endl;
    else
    {
        cout<<"NO"<<endl;
    }
    


  }



   
      
    
        

