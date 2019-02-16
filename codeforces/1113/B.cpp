#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k,sura,sum=0;
    vector<int>v;
   vector<int>gg;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>k;
        v.push_back(k);
        sum+=k;
    }

    sort(v.begin(),v.end());
    for(i=1;i<n;i++)
    {
        int sum2=v[0]+v[i];
        for(j=1;j<=v[i];j++)
        {
            int sum3=0;
            if(v[i]%j==0){
             sum3=v[0]*j+(v[i]/j);
          int   dif=sum2-sum3;
            gg.push_back(dif);
            }

        }


    }
    sort(gg.begin(),gg.end());
    int g=gg.size();
    cout<<sum-gg[g-1]<<endl;



}
