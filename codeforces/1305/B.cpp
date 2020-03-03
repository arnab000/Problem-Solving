#include<bits/stdc++.h>
using namespace std;

int main()
{
string s;
cin>>s;
bool hbe=false;
long long ev=0,od=0;
long long haha=INT_MAX,h=-1;
vector<long long>ans1,ans2,ans3;
for(long long i=0;i<s.size();i++)
{

    if(s[i]=='('){
        ev++;
        haha=min(haha,i);
        ans1.push_back(i+1);
    }
    else if(s[i]==')'){
        od++;
        h=max(i,h);
        ans2.push_back(i+1);
    }
}
long long ans=-1;
ans= min(ev,od);
if(haha>h)
    hbe=true;
if(hbe==true)
{
    cout<<0<<endl;
    return 0;
}
sort(ans1.begin(),ans1.end());
sort(ans2.rbegin(),ans2.rend());
for(long long i=0;i<ans;i++)
{
    if(ans1[i]<ans2[i]){
        ans3.push_back(ans1[i]);
        ans3.push_back(ans2[i]);
    }
}
cout<<1<<endl;
cout<<ans3.size()<<endl;
sort(ans3.begin(),ans3.end());
for(long long i=0;i<ans3.size();i++)
{
    cout<<ans3[i]<<" ";
}
cout<<endl;



}
