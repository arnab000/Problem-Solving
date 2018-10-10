
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,j,sum=0;
    vector<int>v;
    cin>>x>>y;
    for(i=0;i<x;i++)
    {
        cin>>j;
        v.push_back(j);
    }
sort(v.begin(),v.end());
for(i=0;i<y;i++)
{
    if(v[i]<=0)
    sum+=v[i];
}
cout<<sum*(-1)<<endl;

}
