#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int test;
    cin>>test;
    while(test--){
            int n;
    cin>>n;
    map<int,int>ma;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        ma[k]=i+1;
 
    }
    int mx=ma[1];
    int mn=ma[1];
cout<<1;
     for(int i=2;i<=n;i++)
    {
       mx = max(mx,ma[i]);
       mn = min(mn,ma[i]);
       if(mx-mn+1>i) cout << 0;
       else cout << 1;
 
    }
    cout<<endl;
 
    }
}