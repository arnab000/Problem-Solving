#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while(test--)
    {
        string s;
        cin>>s;
        int ans=0;
        for(int i=0;i<s.size()-1;i++)
        {
            int t=ans;
            if(s[i]=='1' && s[i+1]=='0')
            {
               i++;
               while(s[i]=='0' && i<s.size() )
               {
                   i++;
                   ans++;

               }
               i--;
               if(i>=s.size()-1)
            ans=t;
            }



        }
        cout<<ans<<endl;

    }
}
