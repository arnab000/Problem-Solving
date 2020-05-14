#include<bits/stdc++.h>
    
using namespace std;
#define ll long long
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define fo(a,b,c) for(int i=a;i<b;i+=c)  
int pow(int x,int y){
    int res=1;
    while(y){
        if(y&1) res*=x;
        y>>=1;
        x*=x;
    }
    return res;
}   

int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
       long long n,k;
       cin>>n>>k;
     priority_queue<ll>pq;
      priority_queue <ll, vector<ll>, greater<ll> > pq2; 
      for(ll i=0;i<n;i++)
      {
          ll y;
          cin>>y;
          pq2.push(y);
      }
       for(ll i=0;i<n;i++)
      {
          ll y;
          cin>>y;
          pq.push(y);
      }
      while(k>0)
      {
          ll ami=pq.top();
          ll tmi=pq2.top();
          if(tmi>=ami)
          {
             break;
          }
          else if(ami> tmi)
          {
              pq.pop();
              pq2.pop();
              pq.push(tmi);
              pq2.push(ami);
              k--;
          }
          
      }
      ll sum=0;
      while (pq2.empty() == false) 
    { 
        sum+=pq2.top();
        pq2.pop(); 
    } 
    cout<<sum<<endl;

    }
   
      
    
        

}