#include<bits/stdc++.h>
using namespace std;
int main()
{

  int n,k;
  vector<int>v;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      cin>>k;
      v.push_back(k);
  }
  sort(v.begin(),v.end());
  int l=v.size();
 int  m=v[l-2]-v[0];
 int  x=v[l-1]-v[1];
 if(x>m)
    cout<<m<<endl;
 else
    cout<<x<<endl;

}
