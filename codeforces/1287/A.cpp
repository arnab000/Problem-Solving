#include<bits/stdc++.h>
using namespace std;
int main()
{
int test;
cin>>test;
while(test--)
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    vector<int>sura;
    for(int i=0;i<k;i++)
    {
        if(s[i]=='A')
        {
            sura.push_back(i+1);
        }
    }
    if(sura.empty())
    {
        cout<<0<<endl;
        continue;
    }
   int  ans=0;

    for( int i=0;i<sura.size()-1;i++)
    {
        ans=max(ans,sura[i+1]-sura[i]-1);
    }
    ans=max(ans,k-sura[sura.size()-1]);
    cout<<ans<<endl;

}



}
