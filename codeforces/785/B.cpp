#include<bits/stdc++.h>
using namespace std;



int main()
{
  //freopen("text.txt","w",stdout);
  long long t,m,x,y,i,j,n,sura,k,l,max1,max2,min1,min2;
  vector<long long>v;
  vector<long long>v2;
  vector<long long>v3;
  vector<long long>v4;
  cin>>t;
  for(i=0;i<t;i++)
  {
      cin>>x>>y;
      v.push_back(x);
      v2.push_back(y);
  }
  cin>>n;
   for(i=0;i<n;i++)
  {
      cin>>x>>y;
      v3.push_back(x);
      v4.push_back(y);
  }
  max1=v[0];
  min1=v2[0];
  for(i=1;i<t;i++)
  {
      if(max1<v[i])
        max1=v[i];
      if(min1>v2[i])
        min1=v2[i];

  }
  max2=v3[0];
  min2=v4[0];
    for(i=1;i<n;i++)
  {
      if(max2<v3[i])
        max2=v3[i];
      if(min2>v4[i])
        min2=v4[i];

  }
  sura=max2-min1;
  k=max1-min2;
  //cout<<sura<<endl;
  //cout<<k<<endl;
  if(k>0 &&k>=sura)
    cout<<k<<endl;
    else if(sura>0 && sura>k)
    cout<<sura<<endl;

    else
        cout<<"0"<<endl;














}

