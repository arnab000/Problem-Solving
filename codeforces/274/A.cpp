#include<bits/stdc++.h>
using namespace std;



int main()
{
  long long x,y,i,j,k,l=0,d=0;

  vector<long long>v;
  set<long long>s;
  set<long long>::iterator it;
  cin>>x>>y;
  for(i=0;i<x;i++)
  {
      cin>>k;

        v.push_back(k);


      }
sort(v.begin(),v.end());
 for(i=0;i<x;i++)
 {
     if(v[i]%y!=0||s.find(v[i]/y)==s.end())
        {
            s.insert(v[i]);


       }





 }
cout<<s.size()<<endl;
}
