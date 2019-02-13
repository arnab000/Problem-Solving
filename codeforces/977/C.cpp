#include<bits/stdc++.h>
using namespace std;
int main()
{

  int n,k,sura;
  vector<int>v;
  cin>>n>>sura;
  for(int i=0;i<n;i++)
  {
      cin>>k;
      v.push_back(k);
  }
  sort(v.begin(),v.end());
  if(sura==0)
  {
      int m=v[0]-1;
      if(m>0)
        cout<<m<<endl;
      else
      cout<<"-1"<<endl;
        
  }

  else if(v[sura-1]==v[sura])
    cout<<"-1"<<endl;
  else cout<<v[sura-1]<<endl;

}
