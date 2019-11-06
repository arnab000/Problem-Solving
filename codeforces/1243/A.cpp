#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
    int x,y,n;
    vector<int>sura;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        sura.push_back(k);
    }
    sort(sura.rbegin(),sura.rend());
    int ans=0;
        for(int i=0;i<n;i++)
    {
       if(sura[i]>=i+1)
        ans=i+1;

    }
    cout<<ans<<endl;
    }

}
