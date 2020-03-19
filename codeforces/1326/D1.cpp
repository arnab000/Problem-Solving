#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long test;
    cin>>test;
    while(test--){
string s;
cin>>s;
string s1="",s2="";
long long u=0;
bool hbe=true;
for(long long i=0;i<s.size()/2;i++)
{

    if(s[i]==s[s.size()-(i+1)])
    {
        s1+=s[i];
        s2+=s[s.size()-(i+1)];
    }
    else
    {

        hbe=false;
        u=i;
           break;

    }

}
if(hbe)
{
    cout<<s<<endl;
    continue;
}
long long mx=-1;
string sstr="",pstr="";
//cout<<u<<endl;
for(long long i=s.size()-(u+1);i>=u;i--)
{
    long long l=i-u+1;
   string str=s.substr(u,l);
   string str1=s.substr(u,l);
   //cout<<u<< " "<<i<<endl;
  //cout<<str<<" "<<str1<<endl;
    reverse(str1.begin(), str1.end());
    if(str==str1)
    {
        if(mx<str.size())
        {
            sstr=str;
            mx=str.size();
        }
    }


}
long long y=-1;

for(long long i=u;i<=s.size()-(u+1);i++)
{
    long long l=(s.size()-(u+1))-i+1;
   string str=s.substr(i,l);
   string str1=s.substr(i,l);
    reverse(str1.begin(), str1.end());
    if(str==str1)
    {
        if(y<str.size())
        {
            pstr=str;
            y=str.size();
        }
    }


}
reverse(s2.begin(), s2.end());
//cout<<s1<<sstr<<s2<<endl;
if(sstr.size()>pstr.size())
{
    cout<<s1+sstr+s2<<endl;
}
else
     cout<<s1+pstr+s2<<endl;





    }


}