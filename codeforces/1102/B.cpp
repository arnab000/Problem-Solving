
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,k,l,h=-1;
    cin>>n>>k;
    vector<int>sura;
    vector<int>sura2;
     vector<int>v;
     vector<int>v2;
     set<int>s;
    int arr[6000]={0};
    int ar[6000]={0};
    for(int i=0;i<n;i++)
    {
        cin>>m;
        sura.push_back(m);
        sura2.push_back(m);

    }
    if(n==k)
    {
        cout<<"YES"<<endl;
        for(int i=1;i<=k;i++)
        {
            cout<<i<<" ";
        }
        return 0;
    }
    sort(sura2.begin(),sura2.end());
    for(int i=0;i<n;i++)
    {
        l=1;
        while(sura2[i]==sura2[i+1] &&i<n)
        {
            l++;
            i++;
        }
        arr[sura2[i]]=l;
        h=max(h,l);

    }
    if(h>k || n<k)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
           // cout<<arr[sura[i]]<<" ";
            v.push_back(arr[sura[i]]);
             v2.push_back(arr[sura[i]]);
           s.insert (arr[sura[i]]);
           arr[sura[i]]--;
        }
       //cout<<endl;
        int y=s.size();
        sort(v2.begin(),v2.end());
    for(int i=0;i<n;i++)
    {
        l=1;
        while(v2[i]==v2[i+1] &&i<n)
        {
            l++;
            i++;
        }
        ar[v2[i]]=l;


    }


        if(s.size()<k)
        {
            for(int i=1;i<=k;i++)
            {
                s.insert(i);
                if(s.size()>y)
                {
            for(int j=0;j<n;j++)
            {
             if(ar[v[j]]>1)
             {
                 ar[v[j]]=ar[v[j]]-1;
                 v[j]=i;


                 break;
             }
            }

                }
            }

        }
        for(int i=0;i<n;i++)
            {
             cout<<v[i]<<" ";
            }
    }

}
