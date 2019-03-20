
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long i,j,x,y,q,sum=0,k;
  vector<long long>v;
  vector<long long>v1;
  vector<long long>v2;


  cin>>x;
  cin>>q;
  v.push_back(q);
  for(i=0;i<x-2;i++)
  {
      cin>>q;
      v.push_back(v[i]+q);

  }
  for(i=0;i<v.size();i++)
  {
     sum+=v[i];

  }
  k=(((x*(x+1))/2)-sum)/x;

  v1.push_back(k);
   v2.push_back(k);
  for(i=0;i<v.size();i++)
  {

       v1.push_back(k+v[i]);
      v2.push_back(k+v[i]);
  }
  sort(v2.begin(),v2.end());
   for(i=0;i<v2.size();i++)
  {
       if(v2[i]==v2[i+1] || v2[i]<1 || v2[i]>x)
       {
           cout<<"-1"<<endl;
           return 0;
       }
  }

 for(i=0;i<v1.size();i++)
  {
      cout<<v1[i]<<" ";
  }








}
