#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    vector<long long >sura;
    map<long long,long long >ma;
    cin>>n;
    for(long long i=0;i<n*n;i++)
    {
        long long k;
        cin>>k;
        sura.push_back(k);
        ma[k]++;
    }
    vector<long long>ans;
    
    sort(sura.rbegin(),sura.rend());
    if(n==1)
    {
        cout<<sura[0]<<endl;
        return 0;
    }
    if(n==2)
    {
         cout<<sura[0]<<" "<<sura[1]<<endl;
        return 0;
    }
    ans.push_back(sura[0]);
      ans.push_back(sura[1]);
       ma[sura[0]]--; ma[sura[1]]--;

      long long p=2;
      while(ans.size()<n ){
            long long i=ans.size()-1;
      for(long long j=ans.size()-2;j>=0;j--)
      {
          long long h=__gcd(ans[i],ans[j]);
      ma[h]--;
       ma[h]--;
      }
      for(;p<n*n;p++)
      {
          if(ma[sura[p]]>0){
            ans.push_back(sura[p]);
            ma[sura[p]]--;
            break;
          }
      }
      }
      for(long long u=0;u<ans.size();u++)
      {
          cout<<ans[u]<<" ";
      }

}
