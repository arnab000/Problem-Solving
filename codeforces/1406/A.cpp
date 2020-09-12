/*#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f first
#define s second
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef pair<ll , pair<ll, ll> > pi;


int main()
{
    Fast
 ll test;
 cin>>test;
 while(test--)
 {
     ll n;
     cin>>n;
     vector<ll>sura;
     map<ll,ll>ma;
     for(ll i=0;i<n;i++)
     {
         ll k;
         cin>>k;
         ma[k]++;
     }
     ll ans=0;
     bool hbe=true;
     for(ll i=0;i<105;i++)
     {
         if(ma[i]>1)
         {
             if(hbe)
           ans+=2;
           else
           {
               ans++;
           }
           
         }
         else if(ma[i]==1)
         {
             ans++;
             hbe=false;
         }
         else if(ma[i]==0)
         {
             break;
         }
         
     }
     cout<<ans<<endl;

 }


}



   
      
    
        

