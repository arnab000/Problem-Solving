#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,n,sum=0;
    vector<int>v;
    vector<int>sura;
    vector<int>v1;
    vector<int>sura1;
    cin>>n>>k;
    int ar[n];

    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        sura1.push_back(ar[i]);
        v1.push_back(0);


    }
    sort(ar,ar+n,greater<int>());
    for(i=0;i<k;i++)
    {
        sum+=ar[i];
        v.push_back(ar[i]);


    }

    cout<<sum<<endl;

    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
    // cout<<v[i]<<endl;
        for(j=0;j<n;j++)
        {
             //cout<<arr[v[i]]<<endl;
            if(v[i]==sura1[j] && v1[j]==0)
            {
                sura.push_back(j);

                v1[j]=1;
                break;
            }
        }
    }
    sort(sura.begin(),sura.end());
   // for(i=0;i<sura.size();i++)
    //{
      //  cout<<sura[i]<<endl;
    //}

    if(k==1)
    {
        cout<<n<<endl;
    }
    else {
    for(j=0;j<k;j++)
    {
    if(j==0)
    {
        cout<<sura[j]+1<<" ";
    }
    else if(j>0 && j<k-1)
    {
        cout<<sura[j]-sura[j-1]<<" ";
    }
    else if(j==k-1)
    {
        cout<<n-(sura[j-1]+1)<<endl;
    }
    }
    }
}
