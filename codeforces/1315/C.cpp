#include <bits/stdc++.h>

using namespace std;



int main()
{
int test;
cin>>test;
while(test--)
{
    int n;
    cin>>n;
    vector<int>sura;
    map<long long,long long >ma;
    vector<int>mura;
    vector<int>ans;
    for(long long i=0;i<n;i++)
    {
        int k;
        cin>>k;
        sura.push_back(k);
        ma[k]++;

    }
    for(long long i=1;i<=2*n;i++)
    {
        if(ma[i]<=0)
            mura.push_back(i);
    }
    //sort(sura.begin(),sura.end());
    sort(mura.begin(),mura.end());
    map<long long ,bool>haha;
     for(long long i=0;i<n;i++)
    {
     ans.push_back(sura[i]);

        for(long long j=0;j<mura.size();j++)
        {
            if(mura[j]>sura[i] && haha[mura[j]]==false)
            {
                ans.push_back(mura[j]);
                haha[mura[j]]=true;
                break;
            }
        }

    }
     if(ans.size()==2*n)
     {
          for(long long i=1;i<=2*n;i++)
    {
        cout<<ans[i-1]<<" ";
    }
    cout<<endl;
     }
     else
        cout<<-1<<endl;


}
 }

