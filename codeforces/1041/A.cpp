#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    vector<int>v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>j;
        v.push_back(j);
    }
    sort(v.begin(),v.end());
    int x=v[n-1]-(v[0]-1);
    int p=x-n;
    cout<<p<<endl;
}
