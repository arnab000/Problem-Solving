#include <bits/stdc++.h>

using namespace std;



int main(){
    long long  n;
    cin >> n;
while(n--){
long long ans=0;
long long k,l;
cin>>k>>l;
set<long long >sura;
long long mx=-1;
for(long long i=0;i<k;i++)
{
    long long h;
    cin>>h;
    sura.insert(h);
    mx=max(mx,h);
    if(l==h)
        ans=1;
}
if(ans!=0)
    {
       cout<<1<<endl;
       continue;
    }
    if(2*mx>=l)
    {
          cout<<2<<endl;
       continue;
    }
ans=ceil(l*1.00/mx);
cout<<ans<<endl;





}
}
