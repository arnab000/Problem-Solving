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

int main()
{
    Fast
 ll test;
 cin>>test;
 while(test--)
 {
     ll n;
     cin>>n;
     vector<ll>hh,ww;
     vector<pair<pair<ll,ll>,ll>>hw,wh;
     vector<pair<ll,ll>>minh(n+1),minw(n+1);
     vector<ll>ans;
     vector<pair<ll,ll>>sura;

     for(ll i=0;i<n;i++)
     {
         ll h,w;
         cin>>h>>w;
         sura.push_back({h,w});
         hw.push_back({{h,w},i+1});
         wh.push_back({{w,h},i+1});
         hh.push_back(h);
         ww.push_back(w);

     }
     sort(hw.begin(),hw.end());
     sort(wh.begin(),wh.end());
     sort(ww.begin(),ww.end());
     sort(hh.begin(),hh.end());
     minh[0]={wh[0].first.second,wh[0].second};
     minw[0]={hw[0].first.second,hw[0].second};
     for(ll i=1;i<n;i++)
     {
         if(hw[i].first.second<minw[i-1].first)
         {
           minw[i]={hw[i].first.second,hw[i].second};

         }
         else
         {
             minw[i]=minw[i-1];
         }

     }
      for(ll i=1;i<n;i++)
     {
         if(wh[i].first.second<minh[i-1].first)
         {
           minh[i]={wh[i].first.second,wh[i].second};

         }
         else
         {
             minh[i]=minh[i-1];
         }

     }
     for(ll i=0;i<n;i++)
     {
         ll x=lower_bound(hh.begin(),hh.end(),sura[i].first)-hh.begin();
         x--;
         if(x>=0 && minw[x].first<sura[i].second)
         {
             cout<<minw[x].second<<" ";
         }
         else
         {
             ll y=lower_bound(ww.begin(),ww.end(),sura[i].first)-ww.begin();
             y--;
             if(y>=0 && minh[y].first<sura[i].second)
             {
                cout<<minh[y].second<<" ";
             }
             else
             {
                 cout<<-1<<" ";
             }

         }
         
     }
     cout<<'\n';

 }


}



   
      
    
        

