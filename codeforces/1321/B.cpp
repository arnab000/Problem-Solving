#include<bits/stdc++.h>
using namespace std;

int main()
{
long long n;
cin>>n;

vector<long long>sura;
vector<pair<long long,long long>>ans;
for(long long i=0;i<n;i++)
{
    long long k;
    cin>>k;
    sura.push_back(k);
   ans.push_back({k-(i+1),k});


}
if(n==1)
{
    cout<<ans[0].second<<endl;
    return 0;
}
long long p=-1;

sort(ans.begin(),ans.end());
for(long long i=0;i<n;i++)
{
   //cout<<ans[i].first<<" "<<ans[i].second<<endl;
    long long baal=ans[i].second;
   while(ans[i].first==ans[i+1].first && i<n-1)
   {
      baal+=ans[i+1].second;
       i++;

   }
   p=max(p,baal);


}
cout<<p<<endl;




}
