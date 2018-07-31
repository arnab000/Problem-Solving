#include<bits/stdc++.h>
using namespace std;
int main()


{
    int n,m,l,r,i,j,p=0,k,u=0,na;
    cin>>n >>m;
    vector<int>v2;
    vector<int>v;
    for(i=0;i<n;i++)
    {

        cin>>l>>r;
        //p=r-l;
//cout<<p;

        //cout<<l<<r<<" ";
            for(j=l;j<=r;j++)
            v.push_back(j);



    }
    na=0;

        for(j=1;j<=m;j++)
        { u=0;
            for(k=0;k<v.size();k++)
            { //cout<<v[k]<<" ";
                if(v[k]!=j){
                    u++;}



            }
            if(u==v.size())
            {
               na++;
              v2.push_back(j);
            }
        }
        cout<<na<<endl;
        if(n!=0)
        {
            for(i=0;i<v2.size();i++)
                cout<<v2[i]<<" ";

        }


}
