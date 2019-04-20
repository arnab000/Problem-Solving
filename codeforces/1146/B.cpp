#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0,l=0,k=0;
    string s,str,sura;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a')
        {

           l=i;
           n++;
        }
    }
    if(n==s.size() )
    {
        cout<<s<<endl;
        return 0;
    }
    if(n!=s.size() && l==s.size()-1)
    {
        cout<<":("<<endl;
        return 0;
    }
    for(int i=0;i<l;i++)
    {
        if(s[i]!='a')
        {
          k++;


        }
    }
    //cout<<k<<endl;
    int u=s.size()-1-l;
    //cout<<u<<endl;

 if(u<k)
 {
     cout<<":("<<endl;
        return 0;
 }
u=u-k;
for(int i=0;i<=l+(u/2);i++)
{   if(s[i]!='a')
    str.push_back(s[i]);
}
//cout<<str<<endl;
sura=s.substr(l+(u/2)+1,s.size()-1-l);
//cout<<sura<<endl;
if(str==sura)
{
   for(int i=0;i<=l+(u/2);i++)
{
    cout<<s[i];
}
}
else
{
     cout<<":("<<endl;

}


}
