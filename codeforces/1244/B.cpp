#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=n;
        if(s[0]=='1' || s[n-1]=='1')
        {
            cout<<n*2<<endl;
            continue;
        }
        else
        {
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='1')
                    ans=max(max((i+1)*2,(n-i)*2),ans);
            }
            cout<<ans<<endl;
        }

    }
}
