#include<bits/stdc++.h>
    
using namespace std;
#define ll long long
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
     
int main()
{
      ll test;
      cin>>test;
      while(test--)
      {
          ll n;
         
          cin>>n;
          ll sura[n+2];
          for (ll i = 1; i <= n; i++)
          {
             cin>>sura[i];
              

          }
          ll arr[n+1];
          for(ll i=1;i<=n;i++)
          {
              arr[i]=1;
          }
          ll ans =1;
          for (ll i = n; i >= 1; i--)
          {
             for(ll j=2;i*j<=n;j++)
             {
                if(sura[i*j]>sura[i])
                {
                    arr[i]=max(arr[i],1+arr[i*j]);
                }

             }
             ans=max(ans,arr[i]);

          }
          cout<<ans<<endl;
          

      }
      
    
        

}