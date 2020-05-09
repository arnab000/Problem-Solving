#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
 long long test;
 cin>>test;
 while(test--)
 {
  long long n;
  cin>>n;
  long long r=1;
  vector<long long>ans;
  while(n!=0)
  {
    if(n%10!=0)
    {
       ans.push_back((n%10)*r);
    }
    n/=10;
    r*=10;
  }
  cout<<ans.size()<<endl;
  for(long long i=0;i<ans.size();i++)
  {
     cout<<ans[i]<<" ";
  }
  cout<<endl;
 
  
 
 }
}