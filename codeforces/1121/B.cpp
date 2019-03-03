#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l=1,n,m,v1,v2=0,v3,v4,o=-1,t=0;
    vector<int>po;
     vector<int>po1;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>v1;
        po.push_back(v1);



    }
    for(i=0;i<n-1;i++)
    {
       for(j=i+1;j<n;j++)
       {

        v2=po[i]+po[j];
       po1.push_back(v2);


       }
    }
    sort(po1.begin(),po1.end());

     for(i=0;i<po1.size();i++)
    {
        l=1;
        while(po1[i]==po1[i+1])
        {
            l++;
            i++;
        }
        if(l>=o)
            o=l;
    }
    cout<<o<<endl;



}
