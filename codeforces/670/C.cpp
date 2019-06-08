#include<bits/stdc++.h>
using namespace std;
int main()
{
    long i,j,k,l,n,first=-1,second=-1,ans;
    cin>>n;
    map<long,long>sura;
    vector<long>dada;
    vector<long>pada;

    for(i=0;i<n;i++)
    {
        cin>>l;
        sura[l]++;
    }
    cin>>k;
    for(i=0;i<k;i++)
    {
        cin>>l;
       dada.push_back(l);
    }
    for(i=0;i<k;i++)
    {
        cin>>l;
       pada.push_back(l);
    }
    for(i=0;i<k;i++)
  {
     long p= sura[dada[i]];
     if(p>first)
     {
         ans=i+1;
         first=p;
         second=sura[pada[i]];
     }
    else if(p==first)
    {
    long h=sura[pada[i]];
      if(h>second)
      {
          ans=i+1;
          second=h;
      }
    }

}
cout<<ans<<endl;
}
