#include<bits/stdc++.h>
using namespace std;
int main()
{
long long i,j,k,l=0,d=0;
stack<char>sura;
string s;
cin>>s;
long long n=s.size();
for(i=0;i<n;i++)
{
    if(s[i]=='[' || s[i]=='{'|| s[i]=='('||s[i]=='<')
        sura.push(s[i]);
   else if((s[i]==']' || s[i]=='}'|| s[i]==')'||s[i]=='>') && sura.empty() )
   {
       d++;
       break;
    }
    else if(s[i]==']')
    {
        if(sura.top()!='[' )
            l++;

       sura.pop();

    }
     else if(s[i]=='}')
    {
        if(sura.top()!='{' )
            l++;

       sura.pop();

    }
     else if(s[i]==')')
    {
        if(sura.top()!='(' )
            l++;

       sura.pop();

    }
     else if(s[i]=='>')
    {
        if(sura.top()!='<' )
            l++;

       sura.pop();

    }
}
if(d>0 || !sura.empty())
    cout<<"Impossible"<<endl;
else
    cout<<l<<endl;

}
