#include<bits/stdc++.h>
using namespace std;
int power[105],school[105];
int main()
{
    int i,j,k,l,n,m,v1,v2=0,v3,v4,o,t;
    vector<int>po;
     vector<int>po1;
    vector<int>sch;
    vector<int>cho;
    cin>>n>>m>>k;
    for(i=0;i<n;i++)
    {
        cin>>v1;
        po.push_back(v1);
        po1.push_back(v1);
        power[v1]=i;

    }
    for(i=0;i<n;i++)
    {
        cin>>v3;
        sch.push_back(v3);
        school[po[i]]=v3;

    }
    sort(po.begin(),po.end(),greater<int>());
    v2=0;
     for(i=1;i<=k;i++)
    {
        cin>>v4;
       o =sch[v4-1];
       t=po1[v4-1];
      // cout<<t<<" "<<o<<endl;

j=0;
        while(po[j]!=t)

        {


            if(o==school[po[j]])
            {
                v2++;
                break;
            }
         j++;


        }
        //cout<<v2<<endl;

    }
    cout<<v2<<endl;



}
