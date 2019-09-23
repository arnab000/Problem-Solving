#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
string s;
cin>>s;
if(k==0)
{
    cout<<s<<endl;
    return 0;
}
if(s.size()==1 )
{
    cout<<0<<endl;
    return 0;
}
if(s[0]!='1')
{
    s[0]='1';
    k--;
}
int i=1;
while(k &&i<s.size())
{
    if(s[i]=='0')
    {
      i++;
      continue;
    }

    s[i]='0';
    i++;

    k--;
}
cout<<s<<endl;




}
