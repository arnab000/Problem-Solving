#include <bits/stdc++.h>

using namespace std;
long long bi(vector<long long>sura,long long k)
{
    long long l=0,r=1000000009,ans=INT_MAX;
    while(l<=r)
    {
        bool hbe=false;
        long long mid=(l+r)/2;
        long long y=k+mid;
         long long haha=-1;
        for(long long i=0;i<sura.size()-1;i++)
        {


    if(sura[i]==(-1) && sura[i+1]!=(-1) )
    {
        haha=max(haha,abs(sura[i+1]-y));
    }
    if(sura[i]!=(-1) && sura[i+1]==(-1) )
    {
        haha=max(haha,abs(sura[i]-y));
    }
    if(sura[i]==(-1) && sura[i+1]==(-1) )
    {
        haha=max(haha,y-y);
    }
    if(sura[i]!=(-1) && sura[i+1]!=(-1) )
    {
        haha=max(haha,abs(sura[i+1]-sura[i]));
    }
        }
        if(haha>mid){
            l=mid+1;
        }
        else
        {
            r=mid-1;
            ans=min(ans,mid);

        }
    }
    return ans;
}


int main(){
    int n;
    cin >> n;
while(n--){
long long k;
cin>>k;
vector<long long>sura;
long long cou=0;
long long sum=0;
//set<long long>s;
set<long long>s1;
for(long long i=0;i<k;i++)
{
    long long a;
    cin>>a;
    sura.push_back(a);
    //s.insert(a);

}
if(sura[0]!=(-1) && (sura[1]==(-1) ))
    {
        s1.insert(sura[0]);

    }

for(long long i=1;i<k-1;i++)
{
    if(sura[i]!=(-1) && (sura[i-1]==(-1) ||sura[i+1]==(-1)))
    {
        s1.insert(sura[i]);

    }
}
  if(sura[k-1]!=(-1) && (sura[k-2]==(-1) ))
    {
        s1.insert(sura[k-1]);
    }
   set<long long>::iterator it;
   if(s1.empty())
   {
       cout<<0<<" "<<0<<endl;
       continue;
   }
   it=s1.begin();
   long long ans=bi(sura,*it);

cout<<ans<<" "<<*it+ans<<endl;



}
}
