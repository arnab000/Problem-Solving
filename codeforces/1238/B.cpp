#include<bits/stdc++.h>
using namespace std;
int main()
{
   int test;
   cin>>test;
   while(test--)
   {
       int x,y;
       cin>>x>>y;
      vector <int>sura;

       for(int i=0;i<x;i++)
       {
           int k;
           cin>>k;
           sura.push_back(k);

       }
sort(sura.begin(),sura.end());
vector<int>sura2;
for(int i=0;i<x;i++)
{
    while(sura[i]==sura[i+1])
    {
        i++;
    }
   // cout<<sura[i]<<endl;
    sura2.push_back(sura[i]);
}
int ans=0;
for(int i=0;i<sura2.size();i++)
{
    int u= sura2[i]-((sura2.size()-(i+1))*y);
    if(u>0)
        ans++;

}
cout<<ans<<endl;


}
}
