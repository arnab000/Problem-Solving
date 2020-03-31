
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
vector<long long>haha;
haha.push_back(2);
haha.push_back(3);haha.push_back(5);haha.push_back(7);haha.push_back(11);haha.push_back(13);haha.push_back(17);haha.push_back(19);haha.push_back(23);haha.push_back(29);haha.push_back(31);
    while(test--)
    {
    long long n;
    cin>>n;
    vector<long long>ans;
    set<long long>s;


    for(long i=0;i<n;i++)
    {
        long long k;
        cin>>k;
        for(long long j=0;j<haha.size();j++)
        {
            if(k%haha[j]==0)
            {
                ans.push_back(haha[j]);
                s.insert(haha[j]);
                break;
            }
        }



    }
    map<int,int>ma;
    cout<<s.size()<<endl;
    long long aha=1;
    for(long long i=0;i<n;i++)
    {
        if(!ma[ans[i]])
        {
            cout<<aha<<" ";
            ma[ans[i]]=aha;
            aha++;
        }
        else
            cout<<ma[ans[i]]<<" ";

    }
    cout<<endl;


    }
}
