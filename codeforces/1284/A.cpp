#include<bits/stdc++.h>
using namespace std;
int main()
{

     int n,m;
     cin>>n>>m;
     vector<string>sura;
     vector<string>sura2;
     for(int i=0;i<n;i++)
     {
         string k;
         cin>>k;
         sura.push_back(k);
     }
     for(int i=0;i<m;i++)
     {
         string k;
         cin>>k;
         sura2.push_back(k);
     }
     int test;
     cin>>test;
     while(test--)
     {
         int u;
         cin>>u;
         int l,p;
         if(u%n==0)
            l=n-1;
         else
            l=u%n-1;

        if(u%m==0)
            p=m-1;
         else
            p=u%m-1;
          //  cout<<l<<" "<<p;

         string ans= sura[l]+sura2[p];
         cout<<ans<<endl;
     }
}
