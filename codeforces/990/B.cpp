#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,j,l,k=1,z,o,sum=0;
    vector<int>v;
     vector<int>sura;
     vector<int>sura2;

    cin>>x>>z;
    for(i=0;i<x;i++)
    {
        cin>>y;
        v.push_back(y);
    }
    sort(v.begin(),v.end());
    for(i=0;i<x;i++)
    {
        while(v[i]==v[i+1])
        {
            i++;
            k++;

        }
        sura.push_back(v[i]);
        sura2.push_back(k);
        k=1;
    }
    l=sura.size();
    o=sura2.size();
    /* for(i=0;i<l;i++)
    {
        cout<<sura[i]<<" "<<sura2[i]<<endl;

    }*/
    for(i=1;i<l;i++)
    {
        if(sura[i-1]<sura[i] && sura[i-1]+z>=sura[i])
        sum+=sura2[i-1];


    }
    cout<<x-sum<<endl;





}
