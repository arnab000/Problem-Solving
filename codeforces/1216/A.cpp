#include<bits/stdc++.h>
using namespace std;
int main()
{
    int baal;
    string s;
    cin>>baal;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.size();i+=2)
    {
       if(s[i]=='b' && s[i+1]=='b')
            {
                ans++;
                s[i]='a';
            }
    else if(s[i]=='a' && s[i+1]=='a')
            {
                ans++;
                s[i]='b';
            }

    }
    cout<<ans<<endl;
    cout<<s<<endl;
}
