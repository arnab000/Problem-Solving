#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        vector<string>sura;
        map<string ,int>ma;
        for(int i=0;i<n;i++)
        {
        string s;
        cin>>s;
        sura.push_back(s);
        ma[s]++;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
        if(ma[sura[i]]>1)
        {
            ans++;
             ma[sura[i]]--;

            for(int k=0;k<4;k++){

            for( char j='0';j<='9';j++)
            {
                sura[i][k]=j;
                if(ma[sura[i]]==0)
                    break;
            }
            if(ma[sura[i]]==0)
                    break;
            }
            ma[sura[i]]++;

        }

        }
        cout<<ans<<endl;
        for(int i=0;i<n;i++)
        {
        cout<<sura[i]<<endl;
        }

    }
}
