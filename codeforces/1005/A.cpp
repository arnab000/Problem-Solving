#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n;
  cin>>n;
  vector<long long>sura,ans;
  for(long long i=0;i<n;i++)
  {
      long long k;
      cin>>k;
      sura.push_back(k);
  }
   for(long long i=1;i<n;i++)
  {
      if(sura[i]==1)
        ans.push_back(sura[i-1]);
  }
  ans.push_back(sura[n-1]);
  cout<<ans.size()<<endl;
  for(long long i=0;i<ans.size();i++)
  {
      cout<<ans[i]<<" ";
  }
  cout<<endl;
}