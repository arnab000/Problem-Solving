#include<bits/stdc++.h>
using namespace std;
int main()
{
 int test;
 cin>>test;
 while(test--)
 {

     vector<int>s;
     int h=INT_MAX;
     int n,k,d;
     cin>>n>>k>>d;
     for(int i=0;i<n;i++)
     {
         int g;
         cin>>g;
         s.push_back(g);
     }
     for(int i=0;i<=n-d;i++)
     {
          set<int>sura;
         for(int j=0;j<d;j++)
         {
             sura.insert(s[i+j]);
         }
         int l=sura.size();
         h=min(h,l);

     }
     cout<<h<<endl;
 }
}
