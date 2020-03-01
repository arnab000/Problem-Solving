#include<bits/stdc++.h>
using namespace std;

int main()
{
long long test;
cin>>test;
string s;
cin>>s;
for(char i='z';i>'a';i--)
{

    for(long long j=s.size()-1;j>=0;j--)
    {  if(s[j]==i &&(s[j-1]==i-1 || s[j+1]==i-1) )
           {
             s.erase(s.begin()+j);
             j++;
           }
           // cout<<s<<endl;
    }
}
for(char i='z';i>'a';i--)
{

    for(long long j=0;j<s.size();j++)
    {
    if(s[j]==i &&(s[j-1]==i-1 || s[j+1]==i-1) )
           {
             s.erase(s.begin()+j);
             j--;
           }
           // cout<<s<<endl;
    }
}
for(char i='z';i>'a';i--)
{

    for(long long j=s.size()-1;j>=0;j--)
    {  if(s[j]==i &&(s[j-1]==i-1 || s[j+1]==i-1) )
           {
             s.erase(s.begin()+j);
             j++;
           }
           // cout<<s<<endl;
    }
}
cout<<test-s.size()<<endl;




}
