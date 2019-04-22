
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dada=-1,ss,f,n;
    cin>>n;

string s,sura;
cin>>s;
for(int i=0;i<s.size();i++)
{
    sura.push_back(s[i]);
}
sort(sura.begin(),sura.end());
//cout<<sura<<endl;
for(int i=0;i<s.size();i++)
{
    if(s[i]!=sura[i])
    {
        dada=i;
        break;
    }
}
if(dada==-1)
{
    cout<<"NO"<<endl;
}
else
{
    int pukti;
for(int i=dada+1;i<s.size();i++)
{
    if(s[dada]>s[i])
    {
         pukti=i;
         break;
    }
}
   cout<<"YES"<<endl;
   cout<<dada+1<<" "<<pukti+1<<endl;


}

}
