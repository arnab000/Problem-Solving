
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,j,max1=0,max2=0;
    vector<int>v;
    vector<int>k;

    cin>>x;
    for(i=0;i<x;i++)
    {
        cin>>y;
        v.push_back(y);

        if(max1<v[i])
            max1=v[i];

    }
    sort(v.begin(),v.end());
    for(i=0;i<x;i++)
    {
        if(max1%v[i]!=0 || v[i]==v[i-1])
        {
            k.push_back(v[i]);
            //cout<<v[i]<<endl;
        }
    }
    j=k.size();
    for(i=0;i<j;i++)
    {
        if(max2<k[i])
            max2=k[i];
    }

    cout<<max1<<" "<<max2<<endl;


}
