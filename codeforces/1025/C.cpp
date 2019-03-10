#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i=0,j,l=0,m=-1;
    string s;
    cin>>s;
    //cout<<s.size()<<endl;
   for(i=0;i<s.size();i++)
   {
      l=1;
        while(s[i]!=s[i+1] && i<s.size()-1)
        {
            l++;
            i++;
        }

   }
   if(l==s.size())
   {
       cout<<l<<endl;
   }
   else{
    s+=s;
    //cout<<s<<endl;
    for(i=0;i<s.size()-1;i++)
    {
        l=1;
        while(s[i]!=s[i+1] && i<s.size()-1)
        {
            l++;
            i++;
        }
        //cout<<l<<endl;
        m=max(m,l);
    }
    cout<<m<<endl;
   }
}
