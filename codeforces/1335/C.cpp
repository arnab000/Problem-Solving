#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long  test;
    cin>>test;
    while(test--){
       map<long long,long long >ma;
       set<long long>s;
       long long n;
       cin>>n;
       long long mx=-1;
       for(long long i=0;i<n;i++)
       {
           long long k;
           cin>>k;
           s.insert(k);
           ma[k]++;
           mx=max(mx,ma[k]);

       }
if(mx==s.size())
{
    mx--;
    cout<<mx<<endl;
}
else
{
    long long d=s.size();
    cout<<min(mx,d)<<endl;
}
    }
}
