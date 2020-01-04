#include<bits/stdc++.h>
using namespace std;
int main()
{


     long long n;
     long long ans=0;
     long long con=0;
     cin>>n;
     vector<long long>haha;
     vector<long long>haha2;
     long long t=n;

     while(n--)
     {
         long long m;
         cin>>m;
         vector<long long>sura;
        long long mx=-1,mn=INT_MAX;
        bool asent=false;
        set<long long>baal;


         for(long long i=0;i<m;i++)
         {
             long long k ;
             cin>>k;

             mx=max(mx,k);

             mn=min(mn,k);
             baal.insert(k);
             if(k>mn)
             asent=true;


         }
         if(asent==true)
           {
               //cout<<"ki holo"<<endl;
               con++;


           }
         else
         {

             haha.push_back(mx);
         haha2.push_back(mn);
         }



     }
     ans+=t*con+((t-con)*con);
     //cout<<ans<<endl;
    // sort(haha.begin(),haha.end());
     sort(haha2.begin(),haha2.end());
     for(long long i=0;i<haha.size();i++)
     {
         vector<long long>::iterator low1;
         low1=lower_bound(haha2.begin(),haha2.end(),haha[i]);
        // cout<<low1-haha2.begin()<<endl;
         ans+=(low1-haha2.begin());
     }
     cout<<ans<<endl;


}
