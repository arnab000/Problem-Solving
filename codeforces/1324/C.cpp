#include<bits/stdc++.h>
using namespace std;
int main()
{
 
long long t;
cin>>t;
while(t--)
{
string s;
cin>>s;
vector<long long>sura;
long long n=s.size();
for(long long i=0;i<s.size();i++)
{
    if(s[i]=='R')
    {
        sura.push_back(i+1);
    }
 
 
}
 
if(sura.empty())
{
    cout<<n+1<<endl;
    continue;
}
sura.push_back(n+1);
//cout<<sura.size()<<endl;
long long mx=sura[0];
for(long long i=0;i<sura.size()-1;i++)
{
    mx=max(mx,sura[i+1]-sura[i]);
}
cout<<mx<<endl;
}
 
 
 
}