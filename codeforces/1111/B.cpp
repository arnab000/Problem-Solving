#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     vector<long long>v;
     vector<long long>sura;
     double ans=-1,l;
     long long n,k,h,x,i;
     cin>>n>>k>>h;
     for(i=0;i<n;i++)
     {
         cin>>x;
         v.push_back(x);

     }
     sort(v.begin(),v.end(),greater<long long>());
     for(i=0;i<n;i++)
     {
      if(i==0)
      {
          sura.push_back(v[i]);
      }
      else if(i>0)
      {
          sura.push_back(sura[i-1]+v[i]);
      }
     }
     i=n-1;
    while(1)
    {
      if((i+1)*k>=h)
      {
         l= sura[i]+h;
         l=(l*1.0)/(i+1);
         //cout<<l<<endl;
         if(ans<=l)
         {
             ans=l;
         }
      }
      else if(h>(i+1)*k)
      {
          l=sura[i]+(i+1)*k;
          l=(l*1.0)/(i+1);
            //cout<<l<<endl;
           if(ans<=l)
         {
             ans=l;
         }
      }
      i--;
      h--;
      if(i==-1 || h==-1)
        break;

    }
  printf("%.10f",ans);
 }
