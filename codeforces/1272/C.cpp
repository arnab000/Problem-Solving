#include<bits/stdc++.h>
using namespace std;
 map<char,bool>ma;
int main()
{
    long long n;
    string s;
    long long a;
    cin>>n>>a;



    cin>>s;
    for(int i=0;i<a;i++)
    {
        char k;
        cin>>k;
        //cout<<k<<endl;
        ma[k]=true;
    }
    long long r=0;
    long long ans=0;
    for(int i=0;i<=n;i++)
    {
        if(ma[s[i]]==true)
        {
            r++;
        }
        else
        {
            ans+=((r*(r+1))/2);
            //cout<<ans<<endl;
            r=0;
        }
    }

    cout<<ans<<endl;
}
